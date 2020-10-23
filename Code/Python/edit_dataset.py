import pandas as pd
import numpy as np


def edit(dfr, pth):
    """Edit every single state"""
    total_before_edit = 0  # just for the sake of information, optional
    total_after_edit = 0  # just for the sake of information, optional

    dfr.replace({'Bundesland': {'ä': 'ae', 'ö': 'oe', 'ü': 'ue'}}, regex=True,
                inplace=True)  # replace special characters
    dfr['Meldedatum'] = pd.to_datetime(dfr['Meldedatum'])  # transform Meldedatum into datetime format
    idx = pd.date_range(min(dfr.Meldedatum), max(dfr.Meldedatum))  # create a new index, earliest to most current date

    k = 0
    df_3d = np.zeros([1000, 16, 1000])
    bl = []
    df_new = None  # local variable referenced before assignment

    for states, df_region in dfr.groupby('Bundesland'):
        '''Add gender arrays'''
        female = np.where(df_region['Geschlecht'] == 'W', 1, 0)  # set female to 1
        df_region['Female'] = female * df_region['AnzahlFall']

        unknown = np.where(df_region['Geschlecht'] == 'unbekannt', 1, 0)  # set unknown to 1
        df_region['Unknown'] = unknown * df_region['AnzahlFall']

        male = np.where(df_region['Geschlecht'] == 'M', 1, 0)  # set male to 1
        df_region['Male'] = male * df_region['AnzahlFall']

        '''Add age group arrays'''
        a00_04 = np.where(df_region['Altersgruppe'] == 'A00-A04', 1, 0)  # set age group A00-A04 to 1
        df_region['A00-A04'] = a00_04 * df_region['AnzahlFall']

        a05_14 = np.where(df_region['Altersgruppe'] == 'A05-A14', 1, 0)  # set age group A05_A14 to 1
        df_region['A05-A14'] = a05_14 * df_region['AnzahlFall']

        a15_34 = np.where(df_region['Altersgruppe'] == 'A15-A34', 1, 0)  # set age group A15_A34 to 1
        df_region['A15-A34'] = a15_34 * df_region['AnzahlFall']

        a35_59 = np.where(df_region['Altersgruppe'] == 'A35-A59', 1, 0)  # set age group A35-A59 to 1
        df_region['A35-A59'] = a35_59 * df_region['AnzahlFall']

        a60_79 = np.where(df_region['Altersgruppe'] == 'A60-A79', 1, 0)  # set age group A60_A79 to 1
        df_region['A60-A79'] = a60_79 * df_region['AnzahlFall']

        a80_plus = np.where(df_region['Altersgruppe'] == 'A80+', 1, 0)  # set age group A80+ to 1
        df_region['A80+'] = a80_plus * df_region['AnzahlFall']

        a_unknown = np.where(df_region['Altersgruppe'] == 'unbekannt', 1, 0)  # set age group A35-A59 to 1
        df_region['A_unknown'] = a_unknown * df_region['AnzahlFall']

        '''Sort by date'''
        df_region['Meldedatum'] = pd.to_datetime(df_region['Meldedatum'])
        df_region = df_region.sort_values(by='Meldedatum')
        # print(f'{states} \n', df_region['Meldedatum'].iloc[[0, -1]].to_csv(header=None, index=None))

        '''sum up cases'''
        aggregation_functions = {'Meldedatum': 'first', 'Bundesland': 'first', 'AnzahlFall': 'sum',
                                 'AnzahlGenesen': 'sum', 'AnzahlTodesfall': 'sum', 'Female': 'sum', 'Unknown': 'sum',
                                 'Male': 'sum', 'A00-A04': 'sum', 'A05-A14': 'sum', 'A15-A34': 'sum', 'A35-A59': 'sum',
                                 'A60-A79': 'sum', 'A80+': 'sum', 'A_unknown': 'sum'}
        df_new = df_region.groupby(df_region['Meldedatum']).aggregate(aggregation_functions)

        '''check if a date is missing'''
        missing = pd.date_range(start=df_new.Meldedatum.min(), end=df_new.Meldedatum.max()).difference(df_new.index)
        if not missing.empty:
            r = pd.date_range(start=df_new.Meldedatum.min(), end=df_new.Meldedatum.max())
            df_new = df_new.reindex(r)
            df_new.fillna(0, inplace=True)

        '''Put cases in an array'''
        cases = df_new['AnzahlFall']
        cases = cases.values[:]
        # print(f'Total rows of {states} before editing: {len(cases)}')

        '''Make array equally long'''
        df_new.index = pd.DatetimeIndex(df_new.index)
        df_new = df_new.reindex(idx, fill_value=0)

        '''Replace 0s with state name'''
        filled_state = np.where(df_new['Bundesland'] == 0, f'{states}', f'{states}')
        df_new['Bundesland'] = filled_state

        '''Print number of rows'''
        # print(f'Total rows of {states} after editing: ', df_new['Bundesland'].count(), '\n --------')
        total_before_edit += df_region['Bundesland'].count()
        total_after_edit += df_new['Bundesland'].count()

        '''Drop unnecessary columns'''
        df_new.drop(columns=['Meldedatum'], axis=1, inplace=True)

        '''Write a new csv file'''
        # df_new.to_csv(f'{pth}/{states}.csv')

        # Eingriff
        bl.append(states)

        df_num = df_new.to_numpy()
        df_num = df_num[:, 1:]

        for i in range(df_num.shape[0]):
            for j in range(df_num.shape[1]):
                df_3d[j, k, i] = df_num[i, j]

        k += 1

        # --------

        '''Write a new csv file'''
        # df_new.to_csv(f'{path}/{states}.csv')

    # print('----> total_before_edit rows before editing ', total_before_edit)
    # print('----> total_after_edit rows before editing ', total_after_edit)

    df_3d = df_3d[:df_new.shape[1]-1, :, :df_new.shape[0]]
    params = df_new.columns[1:]

    return df_3d, params, bl, idx


if __name__ == '__main__':
    '''Read the csv file'''
    path = '/Users/thomas/Documents/TU-Berlin/Faecher/Semester2/Sound-Synthesis/SoundSynthesis_Git/SoundSynthesis/CSV'
    # path = '/home/nilsm/tubCloud/Akt/Sem6/Synth/git_thomas/SoundSynthesis/CSV'
    df = pd.read_csv(path + '/RKI_COVID19.csv')  # path + file name
    data, params, bl, index = edit(df, path)

    print(data[:, 15, 35])



