x = ["fatima",1,0.5,"amin",3]
y = 0
for i in x:
    if isinstance(i, int) or isinstance(i, float):
        y = y + i
        print(y)
    if isinstance(i,str):
        print(f"this is not a number:",i)


           
    