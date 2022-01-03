n=int(input("number of names\n"))
l1=[]
an=0
for i in range (n):
    l1.append(input("first name\n")) 
for i in l1:
    for p in i:
        if p=='a':
           an=an+1
print(an)
        
