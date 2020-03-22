#include <stdio.h>
#include <stdlib.h>

int main(){
    // printf("%d",1);
    int c,count = 0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            count ++;
        }
    }
    printf("%d\n",count);
    return EXIT_SUCCESS;
}