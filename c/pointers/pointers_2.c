#include <stdio.h>


// &: reference operator, creates a reference and returns an address
// *: derefence operator, returns the contents at a particular address
int main(){
    int i;
    // pointer to type int
    int k, *ip;

    ip = &i;

    i= 100;

    k = *ip;

    k = k+2;
    i= *(&k);

    *(&k)=200;
}