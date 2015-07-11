#include <stdio.h>

void main (int argc, char *argv) {
    printf ("%d", fibs (32));
}

int fibs (int n) {
    if (n < 2) {
        return n;
    }
    return fibs (n - 2) + fibs (n - 1);
}
