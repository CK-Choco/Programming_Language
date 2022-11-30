# -*- coding: utf-8 -*-
with open("twisters.txt","r") as f:
    story=f.read()    #讀出檔案內容

words=["Peter"]

for w in words:
    sc=story.count(w)
    print("{}出現了{}次".format(w,sc))