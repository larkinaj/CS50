from cs50 import get_float

def main():
    cents = getCents()

    quarters = calcQuarters(cents);
    cents = cents - quarters * 25;




def getCents():
    while True:
        try:
            cents = get_float("How much change? ")
            if cents > 0:
                break
        except ValueError:
            print("That's not an integer!")
    return cents

def calcQuarters(cents):
    quarters = cents / 25
    return quarters

main()