from cs50 import get_float

def main():
    # Ask how many cents the customer is owed
    cents = getCents()

    # Calculate the number of quarters to give the customer
    quarters = calcQuarters(cents)
    print(cents)
    print(quarters * .25)
    cents = cents - quarters * .25

    # Calculate the number of dimes to give the customer
    dimes = calcDimes(cents)
    print(cents)
    cents = cents - dimes * .10

    # Calculate the number of nickels to give the customer
    nickels = calcNickels(cents)
    print(cents)
    cents = cents - nickels * .5

    # Calculate the number of pennies to give the customer
    pennies = calcPennies(cents)
    print(cents)
    cents = cents - pennies * .01

    # Sum coins
    coins = quarters + dimes + nickels + pennies

    # Print total number of coins to give the customer
    print(f"Total coins: {coins}")
    print(f"Quarters: {quarters}, dimes: {dimes}, nickels: {nickels}, pennies: {pennies}")



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
    quarters = cents * 100 // 25
    return quarters

def calcDimes(cents):
    dimes = cents * 100 // 10
    return dimes

def calcNickels(cents):
    nickels = cents * 100 // 5
    return nickels

def calcPennies(cents):
    pennies = cents * 100 // 1
    return pennies

main()