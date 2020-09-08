import pandas as pd
import numpy as np

'''Read the csv file'''
 eddf = pd.read_csv("/Users/thomas/Documents/TU Berlin/Fächer/Semester2/Sound Synthesis/RKI_COVID19.csv")

def edit(df):
    '''Get all states'''
    states = df.Bundesland.unique()
    print(states)

    '''Get a single state'''
    df = df[df["Bundesland"] == 'Hessen']  # positions over 50 get dropped

    '''Sort by date'''
    df["Meldedatum"] = pd.to_datetime(df["Meldedatum"])
    df = df.sort_values(by="Meldedatum")

    '''Put cases in an array'''
    cases = df['AnzahlFall']
    df['Cases'] = cases  # add a new column to the dataframe

    '''Add a sex array'''
    sex = np.where(df['Geschlecht'] == "W", 1, 0)  # set female to 1 and male to 0
    df['sex'] = sex

    '''Write a new csv file'''
    df.to_csv('Hessen.csv')

    return df


edit(df)


