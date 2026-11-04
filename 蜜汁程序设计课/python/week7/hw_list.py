list1=[35,[3,2],23,56,32,'dd','abc',7.24,22,56,22,34,99,'dd',[3,2],[4,6],'ABc','abc',45,78,32,'a2c','abc']
list_output=[]
listForlist=[]
rubbishBIN=[]
for i in list1:
    #数值查重
    if type(i)==int or type(i)==float:
        if i not in list_output:
            list_output.append(i)
        else:
            rubbishBIN.append(i)
    #字符串查重
    elif type(i)==str:
        i=i.lower()
        if i not in list_output:
            list_output.append(i)
        else:
            rubbishBIN.append(i)
    #列表查重
    else:
        set_i=set(i)
        if set_i not in listForlist:
            listForlist.append(set_i)
        else:
            rubbishBIN.append(list(set_i))
#将中转list中的内容添加到输出list中
for i in listForlist:
    list_output.append(list(i))
#输出处理后列表
print(list_output)

#输出重复元素内容以及重复次数
#首先对垃圾桶去重
rubbishBINzip=[]
for i in rubbishBIN:
    if i not in rubbishBINzip:
        rubbishBINzip.append(i)
for i in rubbishBINzip:
    if type(i)==set:
        i=list(i)
    print("重复内容:",i,",重复次数:",rubbishBIN.count(i))