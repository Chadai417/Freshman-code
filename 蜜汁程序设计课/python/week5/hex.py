number=int(input("请输入一个整数:"))
number2=number
bin=""
while number>0:
    bin=str(number%2)+bin
    number=number//2
print("二进制表示为:",bin)

hex=""
while number2>0:
    hex_digit=number2%16
    if hex_digit<10:
        hex=str(hex_digit)+hex
    else:
        hex=str(chr(hex_digit-10+65))+hex
    number2=number2//16
print("十六进制表示为:",hex)