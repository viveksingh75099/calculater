a=float(input("enter number a:"))
b=float(input("enter number b:"))
c=float(input("enter number c:"))
d= "all value are equle " if (a==b and a==c and b==c)else a  if ( a>b and a>c)   else b if (b>a and b>c) else c
print("big({},{},{})={}".format(a,b,c,d))
