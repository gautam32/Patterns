def asterix(n):
    for j in range(n):
        print('',end='\n')
        for i in range(n):
            if j<int((n-1)/2):
                if i==j or i==n-j-1 or i==int((n-1)/2):
                    print('*',end=' ')
                else:
                    print(' ',end=' ')
            if j==int((n-1)/2):
                print('*',end=' ')
            if j>int((n-1)/2):
                if i==n-1-j or i==j or i==int((n-1)/2):
                    print('*',end=' ')
                else:
                    print(' ',end=' ')
        
print('n=7(n can only be odd numbers)')
asterix(7)
    

