n = float(input())
f1 = lambda n: n
f2 = lambda n: n**f1(n)
print(f2(n))
