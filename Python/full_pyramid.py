def pattern():
    print("Pyramid height: ", end = "")
    h = int(input())

    for i in range(0, h):
        aux = i + h
        for j in range(0, aux):
            if ((j > h + i - 1) or
                (j >= h - i - 1)):
                print("*", end = "")
            else:
                print(" ", end = "")

        print("")
        
if __name__ == '__main__':
    pattern()
