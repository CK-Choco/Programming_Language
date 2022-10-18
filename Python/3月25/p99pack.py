#Layout 布局
#參數 padx 設定水平
#參數 pady 設定垂直
#參數 side 設定位置 left right top bottom
#參數 expand 左右分散對齊 0不要分散 1平均分散
#參數 fill 填滿寬度(x) 高度(y) both none

import tkinter as tk
win=tk.Tk()
win.geometry("300x200")
win.title("pack")
btn1=tk.Button(win,width=25,text="這是按鈕一")
btn1.pack()
btn2=tk.Button(win,width=25,text="這是按鈕二")
btn2.pack()
btn3=tk.Button(win,width=25,text="這是按鈕三")
btn3.pack()
win.mainloop()