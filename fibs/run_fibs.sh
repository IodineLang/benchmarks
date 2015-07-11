echo "Iodine time:"
time iodine fibs.id
echo "Python time:"
time python fibs.py
echo "Ruby time:"
time ruby fibs.rb
echo "C time:"
gcc -O3 fibs.c
time ./a.out

