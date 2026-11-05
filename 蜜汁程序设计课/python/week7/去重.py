#去重
L1=[1,2,3,4,1,2,3,4]
set1=set(L1)
L1=list(set1)
print(L1)

#随机数
import random
outputset=set()
while len(outputset) < 5:
    outputset.add(random.randint(1, 10))
print(outputset)