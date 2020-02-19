#include <stdio.h>
#include <stdlib.h>
// ? I need string functions
#include <string.h>
#include <time.h>

// ! GLOBAL DEFS
/*
    note que los nombres de variables no son iguales en la definicion que en la implementacion,
    eso es correcto y permitido :)
*/
void string_search(char str[], char s);



char word[] = "Hola Edmundoi";
char search_for = 'i';
char word_collection[14][20]= {"True", "humility",
                            "is", "not",
                            "thinking", "less", "of",
                            "yourself;", "it", "is",
                            "thinking", "of",
                            "yourself", "less."};

//{'a','b'};

//? FUNCTIONS & MAIN

void string_search(char palabra[], char search_me){
    printf("\n>---------------------------------\n");
    short length = strlen(word);
    printf("SEARCHING: %s %c\n", palabra, search_me);
    for (short i=0;i < length; i++){
        if (search_for == palabra[i]){
            palabra[i]='x';
            printf("Found char: \'%c\' in palabra: \'%s\'  position: %d \ncrossing it out ...\n\n\n",search_for,palabra, i);
        }
        else {
            // printf(". %c",palabra[i]);
            //noop;
            (void)0;
        }
    }

    printf("--------------------------------->\n");
}

int main(void){

    string_search(word, search_for);


    srand ( time (0) );
    int r = (rand() % 28)/2 ;

    //char* random_word = word_collection[r];
    char str[20];
    strcpy(str,  word_collection[r]);

    //printf( "RANDOM WORD: \'%s\'\n", str);
    string_search(str, search_for);

    return 0;

}