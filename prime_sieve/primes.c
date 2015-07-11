#include <stdio.h>
#include <math.h>

void sieve(int n, int primes[]);

main()
{
    int i, n = 1000000; // find the primes up to 500000
    int v[n];
    sieve(n, v);
    for (i=0;i<n;i++)
        if (v[i] == 1)
            printf("%d\n",i);
}

void sieve(int n, int primes[])
{
    int i, j;
    for (i=0;i<n;i++)
        primes[i]=1;
    primes[0]=0,primes[1]=0;
    for (i=2;i<sqrt(n);i++)
        for (j=i*i;j<n;j+=i)
            primes[j] = 0;
}
