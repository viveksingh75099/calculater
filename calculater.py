def add(P,Q):
    return P+Q
def subtraction(P,Q):
    return P-Q
def multiply(P,Q):
        return P*Q
def divide(P,Q):
            return P/Q

print("plese select the opration.")
print("a.add")
print("b.subtraction")
print("c.multiply")
print("d.divide")

choice=input("plese select choice(a/b/c/d):")
num_1=int(input("plese enterthe first number:"))
num_2=int(input("plese enterthe second number:"))
if choice =='a':
    print(num_1,"+",num_2,"=",add(num_1,num_2))
elif choice == 'b':
    print(num_1, "-", num_2, "=", subtraction(num_1, num_2))
elif choice == 'c':
    print(num_1, "*", num_2, "=", multiply(num_1, num_2))
elif choice == 'd':
    print(num_1, "/", num_2, "=", divide(num_1, num_2))
else:
    print("this is an invalide input")