#include <stdio.h>


int main(){

    printf("======================\n    Data Types\n======================\n");
    printf("int      |    %d Bytes \nlong     |    %d Bytes  \nfloat    |    %d Bytes\nshort    |    %d Bytes\ndouble   |    %d Bytes\n", sizeof(int),sizeof(long), sizeof(float), sizeof(short),sizeof(double));

    printf("char     |    %d Bytes \n",sizeof(char));

    return 0;
}