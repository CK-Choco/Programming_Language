# -*- coding: utf-8 -*-
"""
輸入攝氏(Celsius)溫度轉換華氏(Fahrenheit)溫度
提示:F=(9/5)*C+32
"""

C= float( input("請輸入攝氏溫度:"))
F = (9 / 5) * C + 32
print("攝氏溫度 {0} 轉換為華氏溫度為 {1}".format(C,F))