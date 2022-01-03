l1=[1,2,34,32,121]
l2=[1,2,1,21,123]
l3=[]
if len(l1)==len(l2):
    print("bouth list have same number of elents")
if sum(l1)==sum(l2):
    print("both list have same sum")
for i in l1:
    if i in l2:
        l3.append(i)
print("elements in bouth elents are")
print(l3)        
            
