a=int(input("first elent\n"))
b=int(input("second element\n"))
c=int(input("3rd elent\n"))
print("bigest element is ")
if(a>b):
    if(a>c):
        print(a)
    else:
        print(c)
else:
    if(b>c):
        print(b)
    else:
        print(c)         
