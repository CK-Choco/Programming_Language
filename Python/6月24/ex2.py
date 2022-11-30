print("請選擇運算方式:")
print("1、相加")
print("2、相減")
print("3、相乘")
print("4、相除")

b=int( input("請選擇運算方式(1/2/3/4):"))
a=int( input("依序輸入第一個數字:"))
c=int( input("依序輸入第二個數字:"))

#1
if b==1:
    print("{}+{}=".format(a,c),a+c)
#2
if b==2:
    print("{}-{}=".format(a,c),a-c)
#3
if b==3:
    print("{}*{}=".format(a,c),a*c)
#4
if b==4:
    print("{}-{}=".format(a,c),a/c)
