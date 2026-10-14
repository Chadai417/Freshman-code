year=int(input("请输入年份："))
month=int(input("请输入月份："))
date=int(input("请输入日期："))
day=0
if month==1:
    day=date
elif month==2:
    day=31+date
elif month==3:
    day=31+28+date
elif month==4:
    day=31+28+31+date
elif month==5:
    day=31+28+31+30+date
elif month==6:
    day=31+28+31+30+31+date
elif month==7:
    day=31+28+31+30+31+30+date
elif month==8:
    day=31+28+31+30+31+30+31+date
elif month==9:
    day=31+28+31+30+31+30+31+31+date
elif month==10:
    day=31+28+31+30+31+30+31+31+30+date
elif month==11:
    day=31+28+31+30+31+30+31+31+30+31+date
elif month==12:
    day=31+28+31+30+31+30+31+31+30+31+30+date

if (year%4==0 and year%100!=0 or year%400==0) and month>2:
    day+=1

print("{}年{}月{}日是该年的第{}天".format(year, month, date, day))