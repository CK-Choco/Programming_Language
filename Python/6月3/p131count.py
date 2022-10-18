str1="Never sey Never! Never say Impossible!"
str2="浪花有意千重雪，桃李無言一對春．\n一壺酒，一竿綸，世上如濃有幾人？"
s1=str1.count("Never",15)
s2=str1.count("e",0,3)
s3=str2.count("一")
print("{}\nNever出現{}次,e出現{}次".format(str1,s1,s2))
print("\n{}\n一出現{}次".format(str2,s3))