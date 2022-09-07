from cs50 import get_int

while True:
    n = int(input("Height: "))
    if n > 0 or type(n) != "int":
        break

# n = get_int("Height: ")

for i in range(n):
    print("#")