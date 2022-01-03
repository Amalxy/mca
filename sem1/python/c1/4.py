l1=[]
line="abc efg hig efg rfg abc bcd"
word="efg"
l1=line.split()
n=0
for i in range (len(l1)):
    if l1[i] in word:
        n=n+1 
print(n)           
        
