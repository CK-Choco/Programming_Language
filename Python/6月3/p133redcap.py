# -*- coding: utf-8 -*-
with open("redcap.txt","r") as f:
    story=f.read()    #讀出檔案內容

words=["grandmother","wolf","Little Red-Cap"]

for w in words:
    sc=story.count(w)
    print("{}出現了{}次".format(w,sc))