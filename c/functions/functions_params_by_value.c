#include <stdio.h>
//? by VALUE
void doit( int x )
{
    x = 5;
}


int main() {
    int y = 27;
    doit( y );
    printf("y is now %d\n", y);

    return 0;
}