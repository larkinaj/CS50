agree = input("Do you agree? ").lower()
if agree == "y":
    print("You have agreed")
elif agree == "n":
    print("You have not agreed")
else:
    print("You have not entered a valid character")