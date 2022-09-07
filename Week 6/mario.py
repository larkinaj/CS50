from cs50 import get_int


def main():
    n = height()
    for i in range(n):
        print("#")

def height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                return n
        except ValueError:
            print("That's not an integer")

main()