
try:
    x = int(input("x: "))
except:
    print("That is not an int")
    exit()
try:
    y = int(input("y: "))
except:
    print("That is not an int")
    exit()
operator = input("operator: ")

if operator == "-":
    print(x - y)
elif operator == "+":
    print(x + y)
elif operator == "/":
    print(x / y)
elif operator == "*":
    print(x * y)
else:
    print("operator can only be one of the following: +, -, /, *")