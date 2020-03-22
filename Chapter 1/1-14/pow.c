#include <stdio.h>

int mypow(int m, int n);
int mypow1(int m, int n);


int main(){
    printf("%d \n" , mypow(2,5));
 printf("%d \n" , mypow1(2,5));
    return 0;
}

int mypow(int m, int n){
    int s = 1;
    if(n == 0){
        return s;
    }
    for(int x =0; x < n;x++){
        s *= m;
    }
    return s;
}

int mypow1(int m, int n){
    int s = 1;
    if(n == 0){
        return s;
    }
    for(; n > 0;n--){
        s *= m;
    }
    return s;
}