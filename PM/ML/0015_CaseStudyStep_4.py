import pandas as pd

import matplotlib.pyplot as plt 
import seaborn as sns

Border = "-"*100

#########################################################################################
#   step 1 : Load the DataSet
#########################################################################################

print(Border)
print("|  Step 1 : Load teh Data set")
print(Border)

DataPath = "iris.csv"

df = pd.read_csv(DataPath)

print("Dataset Loaded sucessfully")

print("Initial entries fromm data set are : ")
print(df.head(10))

#########################################################################################
#   step 2 : Data Analysis (EDA)
#########################################################################################

print(Border)
print("|  Step 2 : Data Analysis (EDA)")
print(Border)

print("Shape of dataset",df.shape)

print("Columan names : ",list(df.columns))

print("Missing colums : ")
print(df.isnull().sum())

print("Class Distribution (Species Count) : ")
print(df["species"].value_counts())

print("Statistical report of dataset : ")
print(df.describe())

#########################################################################################
#   step 3 : Decide Dependant and Independant variable
#########################################################################################

print(Border)
print("| step 3 : Decide Dependant and Independant variable")
print(Border)

# X : is Independant variable (Features)
# Y : is Dependant variable (Labels)

feature_cols = [
                    "sepal length (cm)",
                    "sepal width (cm)",
                    "petal length (cm)",
                    "petal width (cm)"
                ]

X = df[feature_cols]
Y = df["species"]  

print("X Shape",X.shape)
print("Y Shape",Y.shape)

#########################################################################################
#   step 4 : Visualization of dataset
#########################################################################################

print(Border)
print("| step 4 : Visualization of dataset")
print(Border)

# Scatter plot
plt.figure(figsize = (7,5))

for sp in df["species"].unique():
    temp = df[df["species"] == sp]
    plt.scatter(temp["petal length (cm)"],temp["petal width (cm)"], label = sp)

plt.title("Marvellous Iris case study")

plt.xlabel("petal length (cm)")
plt.ylabel("petal width (cm)")

plt.legend()
plt.grid()
plt.show()