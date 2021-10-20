def pattern():
    n = int(input("Enter the height of the pattern : "))
    for i in range(1, n+1):
        for j in range(1, n-i+1):
            print("", end = " ")
        for k in range(1, i+1):
            print(k, end = " ")
        print()

if __name__ == '__main__':
    pattern()
