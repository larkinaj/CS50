


def main():
    cents = getCents()
    for i in range(height):
        print("#")

def getCents():
    while True:
        try:
            cents = int(input("How much change? "))
            if cents > 0:
                break
        except ValueError:
            print("That's not an integer!")
    return cents

main()