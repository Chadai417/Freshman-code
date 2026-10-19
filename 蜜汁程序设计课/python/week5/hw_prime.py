number=int(input("please input a number"))
count=1
print("2")
if number>2:
    for i in range(3,number,2):
        j=3
        flag=1
        while j<i:
            if i%j==0:
                flag=0
                break
            j=j+2
            count=count+1
        if flag==1:
            print(i)
print(count)