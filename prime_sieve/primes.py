def primes_sieve2(limit):
    a = [True] * limit                        
    a[0] = a[1] = False

    for (i, isprime) in enumerate(a):
        if isprime:
            yield i
            for n in xrange(i*i, limit, i):   
                a[n] = False
                
for prime in primes_sieve2 (1000000):
    print (prime)
