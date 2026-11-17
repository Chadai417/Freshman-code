students={1:'Alice',2:'Bob',3:'Charlie',4:'Diana',5:'Eve',6:'Frank',7:'Grace',8:'Henry'}
friendships=[(1,2), (1,3), (1,4), (2,3), (2,5), (3,4), (3,6), (4,7), (5,6), (5,8), (6,7), (6,8), (7,8)]

#每个学生的好友列表
friends_dict={}#创建一个包含所有学生的字典，键为学生名字，值为该学生的好友列表
for i in students.keys():
    friends_dict[students[i]]=[]#初始化好友列表
#为每个元组内的两个成员都添加好友
for i in friendships:
    friends_dict[students[i[0]]].append(students[i[1]])
    friends_dict[students[i[1]]].append(students[i[0]])
#输出
print("每个学生的好友列表：")
for i in friends_dict.keys():
    print(i,":",friends_dict[i])

#分析共同好友
print("共同好友分析:")
for i in range(1,9):
    for j in range(i+1,9):
        #找出两人共同好友
        common_friends=set(friends_dict[students[i]])&set(friends_dict[students[j]])
        if len(common_friends)>0:
            print("{}和{}的共同好友为：{}".format(students[i], students[j], list(common_friends)))

#找出最受欢迎的学生
#先找出最多的好友数
max_friends=max(len(friends) for friends in friends_dict.values())
#再找出好友数等于最多好友数的学生
for i in friends_dict.keys():
    if len(friends_dict[i])==max_friends:
        print("最受欢迎的学生为：{}(有{}个好友)".format(i, max_friends))

#检测可能朋友圈子（三人均为好友关系）
print("发现的三人朋友圈：")
for i in range(1,9):
    for j in range(i+1,9):
        for k in range(j+1,9):
            #检查三人是否互为好友
            if (students[j] in friends_dict[students[i]] and 
                students[k] in friends_dict[students[i]] and 
                students[k] in friends_dict[students[j]]):
                print("可能的朋友圈子为：{}、{}、{}".format(students[i], students[j], students[k]))