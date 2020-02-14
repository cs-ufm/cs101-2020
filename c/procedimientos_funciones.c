#include <stdio.h>
// Ejemplo de procedimientos y funciones
// bienvenida, calculo de area y perimetro

// ! definiciones globales
void bienvenida();
int area(int b, int h);
int perimetro(int b, int h);


// ? MAIN
int main(void){
    int base1 = 1;
    int altura1 = 2;
    // ! invocar procedimiento de bienvenida
    bienvenida();

    // TODO: convertir a funciones
    int area_rectangulo1 = area(base1,altura1);
    int perimetro_rectangulo1 = perimetro(base1,altura1);

    int base2 = 5;
    int altura2 = 10;

    printf("Area de rectangulo: %d u^2 \n", area_rectangulo1);
    printf("Perimetro de rectangulo: %d u \n", perimetro_rectangulo1);

    return 0;
}
// Implementacion PROC
void bienvenida(){
    printf("Ingrese su nombre\n");
    char nombre[20];
    scanf("%s", nombre);
    printf("Bienvenido %s\n", nombre);
}

// FUNCIONES
int area(int b, int h){
    int area_rectangulo = b*h;
    return area_rectangulo;
}

int perimetro(int b, int h){
    return 2*b + 2*h;
}