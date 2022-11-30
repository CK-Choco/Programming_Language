# Buttin 元件
#元件名稱=tk.Button(容器名稱,參數)
# 常用參數
# height width 設定高度與寬度
# font fg bg 設定字大小與字形 文字顏色 背景顏色
# padx pady 與容器(Frame)的水平與垂直間距
# text 設定文字內容
# command 事件處理函數

# -*- coding: utf-8 -*-

def btn_click():
    btnvar.set("按下了按鈕1")

def btn_click():
    btnvar.config(fg ="red")

import tkinter as tk
win= tk.Tk()
win.title("Button")

btnvar=tk.StringVar()
btn=tk.Button(win, textvariable=btnvar,command=btn_click)
btnvar.set("這是按鈕1")
btn.pack(padx=20,pady=10)

btn1=tk.Button(win,text="這是按鈕2",command=btn1_click)
btn1.pack(padx=20,pady=10)

win.mainloop()