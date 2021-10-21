def squarePattern():
    side = int(input('Side of the square: \n'))
    for i in range(side):
        for i in range(side):
            print('+', end = '  ')
        print()

squarePattern()
