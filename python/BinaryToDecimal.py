#Complete the BinaryToDecimal() here.
def BinaryToDecimal(x):
    decimal = 0
    x = str(x)[::-1] # reverse the string

    for i in range(len(x)): 
        if x[i] == '1': # if x[i] == 1 then add 2^i to total
            decimal += 2 ** i

    return decimal

def main():
    x = int(input("Enter Binary Number: "))
    DecimalNumb = BinaryToDecimal(x)
    print("Decimal Number: ",DecimalNumb)
main()
