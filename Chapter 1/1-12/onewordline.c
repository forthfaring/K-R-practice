#include <stdio.h>

#define CHANGED 1
#define NOTCHANGE 0

/*
    wfy
*/
int main(){
    char c;
    int change = CHANGED;
    // 如果没有终止符
    while((c = getchar())!= EOF){
        if(c != '\n' && c != '\t' && c != ' '){
            putchar(c);
            change = NOTCHANGE;
        }else {
            if(change == NOTCHANGE){
                printf("\n");
                change = CHANGED;
            } 
        }
    }

    return 0;
}