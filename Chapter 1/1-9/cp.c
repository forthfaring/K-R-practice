#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

int main(){
    printf("please input something...\n");
    int curchar,prevblank;
    prevblank = FALSE;
    while((curchar = getchar()) != EOF){
        if(prevblank == FALSE){
            putchar(curchar);
        }
        if(curchar == ' '){
            prevblank = TRUE;
        }else if(prevblank == TRUE && curchar != ' '){
            prevblank = FALSE;
            putchar(curchar);     
        }
    }
    return EXIT_SUCCESS;
}