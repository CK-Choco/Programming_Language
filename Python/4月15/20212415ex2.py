count = int(input("請輸入答對題數: ")) # 輸入題數
score = 0
if((count >= 0) and (count <= 14)): # 0 <= 答對題數 <= 14
        if( count < 9): # 題數小於9題時
                score = count * 8
        else:
                score = 64 + (count - 8) * 6
        print("你的分數是: " + str(score))
else:
    print("輸入有誤，答對題數必介於0至14之間")