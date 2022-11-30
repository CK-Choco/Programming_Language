# place 透過元件在視窗的相對與絕對位置來指定元件位置
#常用三數 x y 水平與垂直絕對位置
# relx rely 相對水平與垂直位置 值為0~1
# anchor 定位基準點 9 種位置設定方法
# center:正中心
# n s e w : 上方中間 下方中間 右方中間 左方中間
#ne nw se sw 右上角 左上角 右下角 左下角

import tkinter as tk
win =tk.Tk()
win.geometry("300x300")
win.title("視窗標題")

btn1=tk.Button(win,width=20, text="這是按鈕1")
btn1.place(x=0,y=0)
btn2=tk.Button(win,width=20, text="這是按鈕2")
btn2.place(relx=0.5, rely=0.5, anchor="center")
btn3=tk.Button(win,width=20, text="這是按鈕3")
btn3.place(relx=0.5,rely=0.9)
win.mainloop()
