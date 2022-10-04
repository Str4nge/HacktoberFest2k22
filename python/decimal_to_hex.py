def DecimalToHex(x):
    return hex(int(x))

def main():
    x = int(input("Enter Decimal Number: "))
    hex = DecimalToHex(x)
    print("Hex Number: ", hex)
main()
