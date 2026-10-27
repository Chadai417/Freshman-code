while True:
    mode=int(input("请选择操作：【0-2】"))
    object=input("请输入要加密或解密的字符串：")
    k=int(input("请输入移位量（整数，可正可负）："))
    if mode==2:
        k=-k
    for char in object:
        if ord(char)>=65 and ord(char)<=90:
            char=chr((ord(char)-65+k)%26+65)
        if ord(char)>=97 and ord(char)<=122:
            char=chr((ord(char)-97+k)%26+97)
        print(char, end="")
    print()

    if k==0:
        break