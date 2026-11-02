str1=input("请输入字符串:")
#预处理字符串
str1=str1.strip()
str1=str1.lower()

#寻找所需字符是否在字符串中
str0="0123456789abcdefghijklmnopqrstuvwxyz"
for i in str0:
    if i in str1:
        print(i,end="")