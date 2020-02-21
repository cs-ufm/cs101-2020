#include <stdio.h>

#define ROWS 3
#define COLS 2


int main(){

    int mytable[ROWS][COLS] = { {1,2}, {3,4}, {5,6}  };


    for(int i =0 ;i <  ROWS; i++){
        for (int j=0; j< COLS ;j++){
            printf(" %i ", mytable[i][j]);
        }
        printf("\n");
    }
}