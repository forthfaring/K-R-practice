#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

int main(){
    int preBlank = FALSE,cur;
    while((cur = getchar()) != EOF){
        if(preBlank == FALSE || cur != ' '){
            putchar(cur);
        }
        if(cur == ' '){
            preBlank = TRUE;
        }else{
            preBlank = FALSE;
        }
    }

    return EXIT_SUCCESS;
}