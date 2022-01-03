def plyear (a,b):
    for i in range (a,b):
        if((i%4==0 and i%100!=0)or i%400==0):
            print(i) 



c=int(input("enter current year\n"))
l=int(input("enter final year\n"))
plyear(c,l)

