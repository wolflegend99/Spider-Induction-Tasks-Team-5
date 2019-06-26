def power(num, binPowr, mod, powr):
    l = []
    j = 1
    while j < powr:
        r = (num**j) % mod
        l.append(r)
        j *= 2

    rem = 1
    for i in range(len(binPowr)):
        if binPowr[i] == "1":
            rem *= l[i]

    print(rem % mod)


def main():
    num = int(input("Enter the base of number: "))
    powr = int(input("Enter the power of the number: "))
    mod = int(input("enter the divisor: "))

    binPowr = "".join(reversed(bin(powr)[2:]))

    power(num, binPowr, mod, powr)


if __name__ == "__main__":
    main()
