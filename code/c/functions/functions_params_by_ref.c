#include <stdio.h>

void foo( int *x ){
        *x = *x * 5;
}


int main() {
    int z = 2;
    foo( &z );
    printf("%d\n", z);
    return 0;
}