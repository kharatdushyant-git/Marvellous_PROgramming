from sklearn.datasets import load_iris

def main():
    print("-"*30)
    print("Iris Classification case study")
    print("-"*30)

    Dataset = load_iris()

    for i range (len(Dataset.target)):
        print("Id %d,Features %s, Label %s" %(i,Dataset.data[i],Dataset.target[i]))
    
if __name__ == "__main__":
    main()    