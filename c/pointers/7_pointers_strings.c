#include <stdio.h>

int main(){

    char* string="Hola Mundo!";

    // para acceder al primer char
    printf("%c\n",*string);
    // para moverme al siguiente char
    printf("%c\n",*(string+1));

}

