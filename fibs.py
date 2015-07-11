def fibs (n):
    if n < 2:
        return n
    return fibs (n - 2) + fibs (n - 1)

print (fibs (32))
