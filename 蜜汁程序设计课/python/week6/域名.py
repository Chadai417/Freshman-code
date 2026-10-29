email="ppu@cc.ecnu.edu.cn"
while email.find(".")!=-1:
    top=email.find(".")
    email=email[top+1:]
print(email)