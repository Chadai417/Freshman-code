for i in range(1,35):
    for j in range(1, 35):
        if (i*2+j*4==94) and (i+j==35):
            print("chicken={},rabbit={}".format(i,j))