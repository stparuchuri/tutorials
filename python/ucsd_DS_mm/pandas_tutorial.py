# -*- coding: utf-8 -*-
"""
Created on Tue Jul 11 02:16:48 2017
Pandas tutorial: from Python for data science class
@author: surya
"""
import pandas as pd
# pandas series declaration examples
ser = pd.Series(data = [100,200,300,400], index=['tom','bob','alice','clay'])
print(ser)
ser2= pd.Series([100,200,300,400], ['tom','bob','alice','clay'])
print(ser2)
ser3 = pd.Series(data = [100,"foo",300,"foo2"], index=['tom','bob','alice','clay'])
print(ser3)
# display indexes and indexing
print(ser.index)
print(ser['alice'])
print(ser.loc['tom'])
print(ser[['tom','bob']])
print(ser.loc[['tom','alice']])
print(ser[[2,0,1]])
print(ser.iloc[[3,2,0]])
# searching in pandas series
print('tom' in ser)
#arithemtic on pandas
print(ser3*2)

# ------  pandas DataFrame  ------- #
d = {'one':pd.Series([100,200,'foo'],index=['apple','ball','clooocck']), 'two':pd.Series([111,222,333],index=['apple','ball','clock'])}
df = pd.DataFrame(d)
print(df)
print(df.index)
# selecting a subset of dict to create a DF
df2 = pd.DataFrame(d,index = ['apple','ball','clock'])
print(df2)
# adding a new column to DF
df3 = pd.DataFrame(d,index = ['apple','ball','clock'],columns=['two','five'])
print(df3)
# create a DF from python dict
data_df4 = [{'alex':1,'joe':2},{'ema':5,'dora':10,'alice':20}]
df4 = pd.DataFrame(data_df4)
print(df4) # here the row indexes are labelled as number starting from 0
df5 = pd.DataFrame(data_df4,index=['first','second'])
print(df5)
# indexing a DF
print(df['one'])
df['three'] = df['one']*df['two']
print("\n","df","\n",df)
d2 = {'one':pd.Series([100,200,500],index=['apple','ball','clooocck']), 'two':pd.Series([111,222,333],index=['apple','ball','clock'])}
df6 = pd.DataFrame(d2)
df6['flag'] = df6['one'] > 200
print("\n","df6","\n",df6)
# remove/pop a column from DF
print(df.pop('three')) # returns the column
print(df)
# double indxing in DF.
print(df5['alex']['first'])
print(df5.iloc[0][0])