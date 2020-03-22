#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int lineCount,wordCount,charCount,c,where = OUT;
    lineCount = charCount = wordCount = 0;
    while((c = getchar()) != EOF){
        charCount++;
        if(c == '\n'){
            lineCount++;
        }
        if(c == '\n' || c == ' ' || c == '\t'){
            where = OUT;
            
        }else{
            if(where == OUT){
                wordCount++;
            }
            where = IN;
        }

    }
    printf("%d %d %d",lineCount,charCount,wordCount);
    return 0;
}