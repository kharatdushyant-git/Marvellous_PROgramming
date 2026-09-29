import matplotlib.pyplot as plt

def main():

    language = ["C","C++","Java","Python"]
    students = [30,40,35,55]

    plt.bar(

        language,
        students,

        width = 0.6,                          # width of bar
        edgecolor = "black",                  # border color of bars
        linewidth = 1,                        # width of bar border
        alpha = 0.3,                          # transapernacy
        label = "Students"                    # legend text

    )

    plt.title("Marvellous Bar Plot")
    plt.xlabel("Languages")
    plt.ylabel("Number Studennts")

    plt.grid(False)

    plt.legend()

    plt.show()

if __name__ == "__main__":
    main()