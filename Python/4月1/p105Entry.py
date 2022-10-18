# Entry 元件 可以讓使用者輸入資料
# 元件名稱= (內容名稱,參數)
# 常用參數
# height width 設定高度與寬度
# font fg bg 設定字大小與字形 文字顏色 背景顏色
# padx pady 與容器(Frame)的水平與垂直間距
# boderwidth 設定邊框寬度
# relief 設定邊框的浮雕效果 flat groove raised ridge sunken solid
# justify 文字對齊的方法 left right center 預設為left
# state 為Entry 元件的狀態 normal(一般) readonly(唯讀) disabled(不可用)
# Entry 元件的預設值 用 insert的方法
#entry.insert(索引值,預設文字)

#-*- coding: utf-8 -*-

import tkinter as tk
win =tk.Tk()
win.title("Entry")

entry=tk.Entry(win,bg="#ffccff",font="Helvetica 15 bold",borderwidth=3)
entry.insert(0,"這是Entry")
entry.insert("2","實用的")
entry.insert("end","真好玩")
entry.pack(padx=20,pady=10)

win.mainloop()