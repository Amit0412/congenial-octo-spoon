def show(name):
    y=int(input("Enter 1 for addition or 2 for retrival"))
    if y==1:




     if name=="Harry":
         a=int(input("Enter choice between 1 and 2"))
         if a==1:
                  z=input("Enter the food item")
                  f=open("eat.txt","r")
                  f=open("eat.txt","a")
                  f.write("\n")
                  f.write(z)
                  print("Written succesfully")
         elif a==2:
             u=input("Enter the exercise done")
             f=open("ds.txt","r")
             f=open("ds.txt","a")
             f.write("\n")
             f.write(u)
             print("Added succesfully")
     elif name=="Amit":
         p=int(input("Enter choice between 1 and 2"))
         if p==1:
             q=input("Enter the food item")
             f=open("st.txt","r")
             f=open("st.txt","a")
             f.write("\n")
             f.write(q)
             print("Comibined succesfully")
         elif p==2:
             i=input("Enter the exercise")
             f=open("cac.txt","r")
             f=open("cac.txt","a")
             f.write("\n")
             f.write(i)
             print("good exercise added")
    elif y==2:
        print("Data will be retrived")
        f=open("st.txt","r")
        print(f.read())

sname=input("Enter any name")
show(sname)
