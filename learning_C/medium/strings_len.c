#include <stdio.h>

int len(char stringl[]){
    unsigned count = 0;
    while (stringl[count] != '\0'){
        count++;
    }

    printf("The number of characters in your string is %u",count);

}

int main(void){
    len("Wordle");
}