import csv
import re

# titles = []
# with open("favorites.csv", "r") as file:
#     reader = csv.DictReader(file)
#     for row in reader:
#         title = row["title"].strip().upper()
#         if not title in titles:
#             titles.append(title)

# for i in sorted(titles):
#     print(i)


# titles = {}
# with open("favorites.csv", "r") as file:
#     reader = csv.DictReader(file)
#     for row in reader:
#         title = row["title"].strip().upper()
#         if title not in titles:
#             titles[title] = 1
#         elif title in titles:
#             titles[title] +=1

# def get_value(title):
#     return titles[title]

# for title in sorted(titles, key=lambda title: titles[title], reverse=True):
#     print(title, titles[title])


# titles = {}
# with open("favorites.csv", "r") as file:
#     reader = csv.DictReader(file)
#     for row in reader:
#         title = row["title"].strip().upper()
#         if title not in titles:
#             titles[title] = 1
#         elif title in titles:
#             titles[title] + =1

# def get_value(title):
#     return titles[title]

# for title in sorted(titles, key=lambda title: titles[title], reverse=True):
#     print(title, titles[title])


# counter = 0
# with open("favorites.csv", "r") as file:
#     reader = csv.DictReader(file)
#     for row in reader:
#         title = row["title"].strip().upper()
#         if re.search("^(OFFICE|THE OFFICE)$", title):
#             counter += 1

# print(f"Number of people who like the office: {counter}")
 

title = input("Title: ").strip().upper()
counter = 0

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        if row["title"].strip().upper() == title:
            counter += 1

print(counter)