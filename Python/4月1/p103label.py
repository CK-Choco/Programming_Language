# Label 標籤
# 常用參數
# height width 設定高度與寬度
# text 設定文字內容
# font fg bg 設定字大小與字形 文字顏色 背景顏色
# padx pady 與容器(Frame)的水平與垂直間距
# anchor 定位基準點 9 種位置設定方法
# center:正中心
# n s e w : 上方中間 下方中間 右方中間 左方中間
#ne nw se sw 右上角 左上角 右下角 左下角

import tkinter as tk
win =tk.Tk()
win.geometry("300x300")
win.title("視窗標題")

label=tk.Label(win, bg="#ffff00", fg="#ff0000", font="Helvetica 15 bold",padx=20, text="這是label")
label.pack()

win.mainloop()