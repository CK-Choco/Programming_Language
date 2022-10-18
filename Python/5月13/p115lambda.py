#ex1
def sum(x):
    return x+1
print(sum(2))     #回傳計算結果3
#ex2
sum=lambda x : x+1
print(sum(2))     #回傳計算結果3
#ex3
y=5
sum=lambda x: x+y
y=10
print(sum(2))     #回傳計算結果12
#ex4
y=5
sum=lambda x, y=y:x+y
y=10
print(sum(2))     #回傳計算結果7