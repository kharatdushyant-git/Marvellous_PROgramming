import matplotlib.pyplot as plt

def main():

    Marks = [45,55,60,62,65,67,72,75,78,80,82,85,90,92]

    plt.hist(

        Marks,                  # Actual data COntinuos
        bins = 5,               # Number of gorups
        edgecolor = "gray" ,    # Border color
        alpha = 0.8,            # Transpernacy
        rwidth = 0.9,           # realtives width of bars

    )

    plt.title("Marvellous Histogram")
    plt.xlabel("Marsk")
    plt.ylabel("Frequency")

    plt.show()

if __name__ == "__main__":
    main()