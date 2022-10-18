A1=int(input("請輸入學生名子:"))
mscores1=int(input("請輸入學生成績:"))
A2=int(input("請輸入學生名子:"))
mscores2=int(input("請輸入學生成績:"))
A3=int(input("請輸入學生名子:"))
mscores3=int(input("請輸入學生成績:"))

if mscores1>mscores2>mscores3:
    print(A1,mscores1)
elif mscores1<mscores2>mscores3:
    print(A2,mscores2)
elif mscores1<mscores3>mscores2:
    print(A3,mscores3)

