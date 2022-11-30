# -*- coding: utf-8 -*-
"""
指派運算練習
"""

a=1
b=2
c=3

x=a+b*c
print("{}".format(x))
a+=c
print("a={0}".format(a,b))  #a=1+3=4
a-=b
print("1a={0}".format(a,b))  #a=4-2=2
a*=b
print("a={0}".format(a,b))  #a=2*2=4
a**=b
print("a={0}".format(a,b))  #a=4**2=16
a/=b
print("a={0}".format(a,b))  #a=16/2=8
a//=b
print("a={0}".format(a,b))  #a=8//2=4
a%=c
print("a={0}".format(a,b))  #a=4%3=1
s="Python"+"好好玩"
print(s)