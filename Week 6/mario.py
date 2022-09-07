# def main():
#     n = height()
#     for i in range(n):
#         print("#")

# def height():
#     while True:
#         try:
#             n = int(input("Height: "))
#             if n > 0:
#                 return n
#         except ValueError:
#             print("That's not an integer")

# main()


# prints everything in one line instead of creating a new line each time
# for i in range(3):
#     print("?", end = "")
# print()


# prints a cube instead of a line
for i in range(3):
    print("?" * 3)