from datetime import date
year=input()
month=input()
day=input()
try:
    d=date(year,month,day)
    print(d)
except:
    print("输入不合法")

import math
try:
    number=int(input("输入一个整数"))
    x=math.sqrt(number)
except ValueError:
   print("输入是负数！")
except:
    print("输入不合法")