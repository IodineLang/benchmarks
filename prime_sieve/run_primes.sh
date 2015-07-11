echo "Iodine speed:"
time iodine primes.id > /dev/null
echo "Python speed:"
time python primes.py > /dev/null
echo "C speed:"
gcc -O3 ./primes.c -lm
time ./a.out > /dev/null
