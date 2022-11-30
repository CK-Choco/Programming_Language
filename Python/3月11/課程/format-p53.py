name = input("請輸入姓名:")
che_grade = input("請輸入國文成績:")
math_grade = input("請輸入數學成績:")

print("{0:8}{1:>5}{2:>5}".format("姓名","國文","數學"))
print("{0:<10}{1:>6}{2:>6}".format(name,che_grade,math_grade))