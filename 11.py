class Colors:
    
    green = "\033[92m"
    white = "\033[0m"

print(Colors.green + "\n4 * (-1)^k + 1\n    ----------  ="
      + "\n      2k - 1\n4 * (", end='')

total = 0
for i in range(1, 1001):
    
    power = i + 1
    dividend = pow(-1, power)
    divisor = (2 * i) - 1
    total += 4 * (dividend / divisor)

    if (dividend > 0):
        print(" + {0} / {1}".format(dividend, divisor), end='')
    else:
        print(" - 1 / {0}".format(divisor), end='')
    
    i += 1

print(") = {0}".format(round(total, 2)) + Colors.white)
print("\n\n\n\n\n\n")
