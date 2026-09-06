import pandas as pd

Border = "-"*100

#########################################################################################
#   step 1 : Loadd the DataSet
#########################################################################################

print(Border)
print("|  Step 1 : Load teh Data set")
print(Border)

DataPath = "iris.csv"

df = pd.read_csv(DataPath)

print("Dataset Loaded sucessfully")

print("Initial entries fromm data set are : ")
print(df.head(10))