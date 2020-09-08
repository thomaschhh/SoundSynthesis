import pandas as pd
import numpy as np


def edit(dfr):
    """Edit every single state"""
    total_before_edit = 0
    total_after_edit = 0

    for states, df_region in dfr.groupby('Bundesland'):

        '''Add gender arrays'''
        female = np.where(df_region['Geschlecht'] == "W", 1, 0)  # set female to 1
        df_region['Female'] = female * df_region['AnzahlFall']

        unknown = np.where(df_region['Geschlecht'] == "unbekannt", 1, 0)  # set unknown to 1
        df_region['Unknown'] = unknown * df_region['AnzahlFall']

        male = np.where(df_region['Geschlecht'] == "M", 1, 0)  # set male to 1
        df_region['Male'] = male * df_region['AnzahlFall']

        '''Add age group arrays'''
        a00_04 = np.where(df_region['Altersgruppe'] == "A00-A04", 1, 0)  # set age group A35-A59 to 1
        df_region['A00-A04'] = a00_04

        a05_14 = np.where(df_region['Altersgruppe'] == 'A05_A14', 1, 0)  # set age group A35-A59 to 1
        df_region['A05-A14'] = a05_14

        a15_34 = np.where(df_region['Altersgruppe'] == 'A15_A34', 1, 0)  # set age group A35-A59 to 1
        df_region['A15-A34'] = a15_34

        a35_59 = np.where(df_region['Altersgruppe'] == "A35-A59", 1, 0)  # set age group A35-A59 to 1
        df_region['A35-A59'] = a35_59

        a60_79 = np.where(df_region['Altersgruppe'] == "A60_A79", 1, 0)  # set age group A35-A59 to 1
        df_region['A60-A79'] = a60_79

        a80_plus = np.where(df_region['Altersgruppe'] == "A80+", 1, 0)  # set age group A35-A59 to 1
        df_region['A80+'] = a80_plus

        a_unknown = np.where(df_region['Altersgruppe'] == "unbekannt", 1, 0)  # set age group A35-A59 to 1
        df_region['A_unknown'] = a_unknown

        '''Sort by date'''
        df_region["Meldedatum"] = pd.to_datetime(df_region["Meldedatum"])
        df_region = df_region.sort_values(by="Meldedatum")
        print(f'{states} \n', df_region["Meldedatum"].iloc[[0, -1]].to_csv(header=None, index=None))

        """sum up cases"""
        aggregation_functions = {'Meldedatum': 'first', 'Bundesland': 'first', 'AnzahlFall': 'sum',
                                 'AnzahlGenesen': 'sum', 'AnzahlTodesfall': 'sum', 'Female': 'sum', 'Unknown': 'sum',
                                 'Male': 'sum', 'A00-A04': 'sum', 'A05-A14': 'sum', 'A15-A34': 'sum', 'A35-A59': 'sum',
                                 'A60-A79': 'sum', 'A80+': 'sum', 'A_unknown': 'sum'}
        df_new = df_region.groupby(df_region['Meldedatum']).aggregate(aggregation_functions)

        """check if a date is missing"""
        missing = pd.date_range(start=df_new.Meldedatum.min(), end=df_new.Meldedatum.max()).difference(df_new.index)
        if not missing.empty:
            print('Missing: ', missing)
            r = pd.date_range(start=df_new.Meldedatum.min(), end=df_new.Meldedatum.max())
            df_new = df_new.reindex(r)
            df_new.fillna(0, inplace=True)
            df_new.drop(columns=['Meldedatum'], axis=1)

        '''Put cases in an array'''
        cases = df_new['AnzahlFall']
        cases = cases.values[:]
        print(f'len(cases): {len(cases)}')

        """Print number of rows"""
        print(f'Total rows of {states} after editing: ', df_new['Bundesland'].count(),  '\n --------')
        total_before_edit += df_region['Bundesland'].count()
        total_after_edit += df_new['Bundesland'].count()

        '''Write a new csv file'''
        df_new.to_csv(f'{states}.csv')

    print('----> total_before_edit rows before editing ', total_before_edit)
    print('----> total_after_edit rows before editing ', total_after_edit)

    return


if __name__ == '__main__':
    '''Read the csv file'''
    df = pd.read_csv("/Users/thomas/Documents/TU Berlin/Fächer/Semester2/Sound Synthesis/RKI_COVID19.csv")  # your path
    edit(df)
