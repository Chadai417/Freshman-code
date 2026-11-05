a=int(input("请输入第一个数字："))
b=int(input("请输入第二个数字："))
dic1={"+":a+b,"-":a-b,"*":a*b,"/":a/b}
cal=input("请输入运算符号：")
print(dic1.get(cal,"输入错误"))