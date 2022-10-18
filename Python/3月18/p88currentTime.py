# -*- coding: utf-8 -*-
"""
程式名稱:偵測目前的時間決定問候語
題目要求:
依目前時間判斷(24小時制)
5點~10:59,輸出「早安」
11點~17:59,輸出「午安」
18點~凌晨4:59,輸出「晚安」
"""

import time

print("現在時間:{}".format( time.strftime("%H:%M:%S")))
h = int( time.strftime("%H") 
)

if h>5 and h < 11:
    print("早安!")
elif h >= 11 and h<18:
    print("午安!")
else:
    print("晚安!")
