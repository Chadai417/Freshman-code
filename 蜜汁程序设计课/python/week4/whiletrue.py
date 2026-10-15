mykey=88
while True:
    guess=int(input("请输入一个100以内的整数:"))
    if guess>mykey:
        print("大了")
    elif guess<mykey:
        print("小了")
    else:
        print("猜对了")
        break