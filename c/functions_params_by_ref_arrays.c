#include <stdio.h>

void build_array( int array_variable[], int length_of_array ) {
    for (int i=0; i<length_of_array; i++)
        {
        array_variable[i] = i;
        }
}


int main() {
    int values[50];

    printf("the value at location 7 starts as %d\n", values[7]);

    build_array(values, 50);

    printf("the value at location 7 is now %d\n", values[7]);

    return 0;
}