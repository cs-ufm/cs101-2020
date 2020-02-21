#include <stdio.h>

// * USING POINTERS
void doit( int* x ){
        *x = 5;
}


int main() {
    int z = 27;
    doit( &z );
    printf("z is now %d\n", z);

    return 0;
}