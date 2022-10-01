#Complete the DecimalToBinary() here.
def DecimalToBinary(x):
    
    binary_lst = [] # list to hold binary number

    while x > 0: # algorithm to convert
        binary_lst.append(str(x%2))
        x = x // 2
    
    binary_lst.reverse() # reverse the order
    return "".join(binary_lst)


def main():
    x = int(input("Enter Decimal Number: "))
    BinaryNumb = DecimalToBinary(x)
    print("Binary Number: ",BinaryNumb)
main()
