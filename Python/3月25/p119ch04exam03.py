#for i in range(1, 101, 1):
#    sum=sum+i 
#    print(i)

for x in range(1, 101):
    for y in range(1, 101):
        print("{0}+{1}={2: ^2}".format(x, y, x+y), end=" ")
    print()