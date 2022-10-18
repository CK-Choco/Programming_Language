#grid 常用參數
# column row 決定要放在螢幕上的哪個位置
# columnspan rowspan 左右欄跟上下欄合併的數量
# padx pady 設定水平跟垂直的間距
# sticky 設定元件排列的方式 四種 n:靠上面 s:靠下面 e:靠右邊 w:靠左邊

import tkinter as tk
win =tk.Tk()
win.geometry("300x300")
win.title("視窗標題")

btn1=tk.Button(win, width=20, text="這是按鈕1")
btn1.grid(column=0,row=0)
btn2=tk.Button(win, width=20, text="這是按鈕2")
btn2.grid(column=0,row=1)
btn3=tk.Button(win, width=20, text="這是按鈕3")
btn3.grid(column=1,row=0)
win.mainloop()