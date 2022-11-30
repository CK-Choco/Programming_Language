x = int( input("請輸入1~99的數字:"))

if x > 57:
    print("再猜小一點")
elif x < 57:
    print("再猜大一點")
else:
    print("你猜中了")