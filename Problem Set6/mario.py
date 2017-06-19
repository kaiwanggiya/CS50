if __name__ == "__main__":
    height = int(input("Input the height of pyramid: \n"))
    axis = 2 * height + 2


    for i in range(1, height + 1):
        print(" " * (height - i) + "#" * i + "  " + "#" * i + " " * (height - 1))
