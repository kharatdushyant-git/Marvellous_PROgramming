import pandas as pd

def main():

    Data = {
        
        "Name" : ["Sagar","Amit","Pooja"],
        "Age" : [27,28,25],
        "City" : ["Pune","Satara","Mumbai"]
    }

    dobj = pd.DataFrame(Data)

    print(dobj)

    print()

    print(dobj["Name"])

if __name__ == "__main__":
    main()    