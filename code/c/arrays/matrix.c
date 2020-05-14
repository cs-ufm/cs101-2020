#include <stdio.h>

//Macros
#define ROWS 10
#define COLS 10



int main(){
    int contador=0;
    int  matrix[ROWS][COLS];
    for (int i = 0 ;i < ROWS ; i++ ){
        for (int j=0; j < COLS ; j++){
            matrix[i][j]=contador;
            printf("%i ",matrix[i][j]);
            contador=contador+1;
        }
        printf("\n");
    }

    return 0;
}