# from cs50 import get_string

# people = {
#     "Carter": "+1-617-495-1000",
#     "David": "+1-949-468-2750"
# }

# name = get_string("Name: ")
# if name in people:
#     print("Number: " + people[name])


# import csv
# from cs50 import get_string

# file = open("phonebook.csv", "a")

# name = get_string("Name: ")
# number = get_string("Number: ")

# writer = csv.writer(file)
# writer.writerow([name, number])

# file.close()

import csv
from cs50 import get_string

name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file:

    writer = csv.writer(file)
    writer.writerow([name, number])
