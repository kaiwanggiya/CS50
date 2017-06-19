if __name__ == "__main__":
    num = input("Input the card number: \n")
    length = len(num)
    flag = 0
    L = []
    check = 1
    def checksum(num):
        result0 = 0
        sum0 = 0
        result1 = 0
        sum1 = 0
        for i in range(0, len(num)):
            L.append(int(num[i]))
            result0 = L[:-1][::-2]
            result1 = L[:][::-2]
            sum1 = sum(result1)
        for elements in result0:
            if elements * 2 >= 10:
                sum0 += 1 + ((elements * 2) % 10)
            else:
                sum0 += elements * 2
        result = sum0 + sum1
        if result % 10 == 0:
            check = 1
        else:
            check = 0
        return check
    while check:

        if length == 15 and (num[:2] == "34" or num[:2] == "37"):
            flag = 1 # amex
            print("Amex")
            break
        elif length == 16 and (int(num[:2]) >= 51 and int(num[:2]) <= 55):
            flag = 2 # master
            print("Master")
            break

        elif (length == 13 or length ==16) and num[0] == "4":
            flag = 3 # visa
            print("Visa")
            break
        else:
            flag = 4 # invalid
            print("Invalid")
            break
