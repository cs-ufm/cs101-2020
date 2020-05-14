#include <stdio.h>


void foo(int x){
    printf("Direccion de memoria desde foo: %p\n", &x);
}
int main(){
    int n = 10;
    printf("Direccion de memoria: %p\n", &n);
    foo(n);
    return 0;
}