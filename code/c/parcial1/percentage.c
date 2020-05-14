#include <stdio.h>


void promedio(double hombres, double mujeres){
    double total_asistentes = hombres + mujeres;
    double phombres = (hombres / total_asistentes) * 100;
    double pmujeres = (mujeres / total_asistentes) * 100;

    printf("%Hombres: %f %\n %Mujeres: %f %\n",phombres, pmujeres);
}
int main(){
    // numeros solo de ejemplo
    double h = 40;
    double m = 30;

    promedio(30,40);
}