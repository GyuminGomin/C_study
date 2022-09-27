#include <stdio.h>

int main(){
    int i;
    i = 0;

    for (;i<10;) {
        printf("%d\n", i);
        i++;
    }

    int j;
    j = 0;

    for(;;){
        printf("무한루프입니다.");
    }
}