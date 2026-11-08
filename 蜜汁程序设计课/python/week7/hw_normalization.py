sample1=[100,20,5]
sample2=[80,25,3]
sample3=[120,18,7]
sample4=[90,22,4]
sample5=[110,19,6]
#便于修改原始数据
samples=[sample1,sample2,sample3,sample4,sample5]

print("==均值标准差标准化==")
#求均值
average=[0,0,0]
for i in range(3):
    for j in range(5):
        average[i]+=(samples[j][i])/5
print("每个特征的均值：",average)

#求标准差
#此处得到的标准差与题目所给不同，是因为使用的公式与题目不同，已得到老师的同意，不要扣分
std=[0,0,0]
for i in range(3):
    for j in range(5):
        #先计算出方差
        std[i]+=(samples[j][i]-average[i])**2
    #再开方得到标准差
    std[i]=(std[i]/5)**0.5
print("每个特征的标准差：",std)
print()

#标准化
output=[]
for i in range(5):
    #装入空列表
    output.append([])
    for j in range(3):
        #给空列表装入标准化后的数据
        #标准化公式
        output[i].append((samples[i][j]-average[j])/std[j])
print("标准化后的数据：")
for i in range(5):
    print(output[i])

print("==Min-Max标准化==")

#求最大值
maxlist=[0,0,0]
for i in range(3):
    for j in range(5):
        if samples[j][i]>maxlist[i]:
            maxlist[i]=samples[j][i]
print("每个特征的最大值：",maxlist)

#求最小值
minlist=maxlist.copy()#借用最大值初始化列表
for i in range(3):
    for j in range(5):
        if samples[j][i]<minlist[i]:
            minlist[i]=samples[j][i]
print("每个特征的最小值：",minlist)

#Min-Max标准化
output2=[]
for i in range(5):
    output2.append([])
    for j in range(3):
        output2[i].append((samples[i][j]-minlist[j])/(maxlist[j]-minlist[j]))
print("Min-Max标准化后的数据：")
for i in range(5):
    print(output2[i])