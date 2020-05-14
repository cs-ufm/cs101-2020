#include <stdio.h>

int main(){
    int N=0;
    printf("Ingrese un numero de 1 - 60: ");
    scanf("%i",&N);
    int arreglo[N];
    if (N >= 1 &&  N <= 60) {
        for (int i = N; i > 0; i--){
            arreglo[i]=i;
            if (i == 1){
                printf("BOOM!!!!\n");
            }  else{
                printf("%i\n",i);
            }
        }
    }else{
        printf("Numero no en rango 1-60 \n");
    }

}