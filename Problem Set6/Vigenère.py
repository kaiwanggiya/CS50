if __name__ == "__main__":
    num = input("Input a letter: \n")
    key = input("Input the keyword: \n")
    length = int(len(num))
    new = []
    database = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    buff = []
    for i in key:
        buff.append(database.find(i))
    multiple = length // len(buff)
    rest = length - multiple * len(buff)
    buff = buff * multiple + buff[:rest]
    for i in range(0, len(num)):
        if i + buff[i] > 26:
            new.append(database[database.find(num[i]) + buff[i] - 26])
        else:
            new.append(database[database.find(num[i]) + buff[i]])
    new = "".join(new)
    print(new)
