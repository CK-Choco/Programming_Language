str1="ABCDEFGHIJK"
print(str1[3:6])

print(str1[:7:2]) #ACEG
print(str1[2::2]) #CEGIK
print(str1[::2])  #ACEGIK

str1="Do one thing at a time!"
str2=str1[13:]
str_w=len(str2)
print("取出字串={},長度:{}".format(str2,str_w))