my_dict={}
while True:
    mode=int(input("请选择功能:（1.录入 2.查询 3.退出)"))
    if mode==3:
        break
    elif mode==1:
        english=input("请输入英文单词：")
        chinese=input("请输入中文意思：")
        my_dict[english]=chinese
        print("该单词已添加到字典库")
    elif mode==2:
        search=input("请输入要查询的内容：")
        if search in my_dict.keys():
            print("%s的中文意思是:%s"%(search,my_dict[search]))
        elif search in my_dict.values():
            for key,value in my_dict.items():
                if value==search:
                    print("%s的英文单词是:%s"%(search,key))
        else:
            print("该单词不在字典库中")