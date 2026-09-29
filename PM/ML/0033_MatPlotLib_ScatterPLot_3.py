import matplotlib.pyplot as plt

def main():

    study_hrs = [1,2,3,4,5,6]
    Marks = [35,42,50,62,72,85]

    plt.scatter(

        study_hrs,
        Marks,

        s = 100,
        marker = "o",
        alpha = 0.8,
        edgecolor = "blue",
        linewidth = 1,
        label = "Students",

    )

    plt.title("Marvellous Scatter Plot")
    plt.xlabel("Study_Hours")
    plt.ylabel("Obtained_Marks")

    plt.grid(True)

    plt.legend()

    plt.show()

if __name__ == "__main__":
    main()