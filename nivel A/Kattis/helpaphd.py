n = int(input())
for i in range(n):
    equation = input()
    if equation == "P=NP":
        print("skipped")
    else:
        n1, n2 = map(int, equation.split("+"))
        print(n1 + n2)