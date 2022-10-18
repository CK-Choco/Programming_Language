# -*- coding:utf-8 -*-
"""
程式名稱:輸出金字塔圖形
"""

def drawpyramid():   #定義 drawpyramid 函數
    h=int(input("請輸入你要顯示的金字塔層數(1~10):"))
    s=input("請輸入要顯示的符號")
    
    for n in range(1,h+1):
        str="{0}{1:^20}"
        print(str.format(n,s*(n*2-1)))

    a=input("按x鍵離開,按任意鍵繼續.")
    if a!="x":
        drawpyramid() #呼叫 drawpyramid 函數
    else:
        print("Goodby!!")


drawpyramid()      #呼叫 drawpyramid 函數