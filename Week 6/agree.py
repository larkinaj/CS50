
agree = input("Do you agree? ").lower()

if agree == "y" or agree == "yes":
    print("You have agreed")
elif agree == "n" or agree == "no":
    print("You have not agreed")
else:
    print("You have not entered a valid character")