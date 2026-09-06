from sklearn.datasets import load_iris

def main():
    print("-"*30)
    print("Iris Classification case study")
    print("-"*30)

    Dataset = load_iris()

    print(Dataset)

    # metadata of data set
    print("Independent variable are : ")
    print(Dataset.feature_names)

    print("Dependent variable are : ")
    print(Dataset.target_names)

if __name__ == "__main__":
    main()    