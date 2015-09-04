n = 1000000
bools = []
for i in range (0, n - 1):
    bools.append (True)
for i in range (2, 1001):
    if (bools [i - 2]):
        i2 = i * i
        for j in range (i2, n + 1, i):
            bools [j - 2] = False

for k in range (0, len (bools)):
    if bools [k]:
        print (k + 2)
