from cs50 import get_int


while True:
    try:
        height = get_int("Height: ")
        if n > 0 and n < 8:
            break


for i in range(1, height + 1):
    print("#" * i)