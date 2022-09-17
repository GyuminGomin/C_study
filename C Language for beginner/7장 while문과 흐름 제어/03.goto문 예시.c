#include <stdio.h>

int main(){
    int hap = 0;
    int i;

    for(i=0;i<=100;i++){
        hap += i;
        if(hap > 2000)
            goto mygoto; // goto를 만나면 원하는 위치로 돌아간다.
    }
mygoto :
    printf("1부터 %d까지 합하면 2000이 넘습니다.\n", i);
}