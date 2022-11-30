# -*- coding: utf-8 -*-
"""
請輸入兩段考成績及期末考成績
段考只要其中一次及格並且期末考及格
學期成績才會及格，及格輸入PASS，否則輸入FAIL
"""
grade1 = int(input("請輸入第一次段考成績:"))
grade2 = int(input("請輸入第一次段考成績:"))
lastGrade = int(input("請輸入期末考成績:"))

if (grade1>=60) and lastGrade>=60:
    print("PASS")
else:
    print("FAIL")