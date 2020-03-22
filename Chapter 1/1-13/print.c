#include <stdio.h>

#define WORD_MAX_LENGTH 10
#define PREBLANK 0
#define PRENOTBLANK 1
#define INIT_COUNT 0

void printH(int arr[]);
void printV(int arr[]);


int main(){
    char c;
    int pre = PREBLANK;
    int wordLen = INIT_COUNT;
    int arr[WORD_MAX_LENGTH];
    for(int i = 0;i<WORD_MAX_LENGTH;i++){
        arr[i] = 0;
    }

    while((c = getchar()) != EOF){
        if( c == '\n' || c == ' ' || c == '\t'){
            // 如果前一个是非空字符，说明前一个单词结束
            // 在数组中计数，并重置wordLen；
            if(pre == PRENOTBLANK){
                arr[wordLen]++;
                wordLen = INIT_COUNT;
            }
            pre = PREBLANK;
        }else{
            wordLen++;
            pre = PRENOTBLANK;
        }
    }
    // 打印水平直方图
    printH(arr);
    // 打印垂直直方图
    printV(arr);
    return 1;
}

void printH(int arr[]){
    for(int i= 1;i<WORD_MAX_LENGTH;i++){
        printf("%d  |",i);
        for(int j=0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }
}

void printV(int arr[]){
    // 限制每种长度单词的数量最大为9 
    int maxCount = 9;
    for(int i=maxCount;i>0;i--){
        printf("%d|",i);
        for(int j=1;j<WORD_MAX_LENGTH;j++){
            if(arr[j] >= i){
                printf(" * ");
            }else{
                printf("   ");
            }
            
        }
        printf("\n");
    }
    for(int j=1;j<WORD_MAX_LENGTH;j++){
        printf("---");
    }
    printf("\n  ");
    for(int j=1;j<WORD_MAX_LENGTH;j++){
        printf(" %d ",j);
    }
}