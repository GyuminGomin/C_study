#include <stdio.h>
#include <malloc.h>

int main(){
    int *p, *s;
    int i, j;

    printf("malloc() 함수 사용\n");
    p = (int*) malloc(sizeof(int)*3);

    for(i=0;i<3;i++){
        printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);
    }

    free(p);

    printf("\ncalloc()함수 사용\n");
    s = (int*) calloc(sizeof(int),3); // calloc함수는 ,를 사용하나 보다.

    for(j=0;j<3;j++){
        printf("할당된 곳의 초기값 s[%d] ==> %d\n", j, s[j]);
    }

    free(s);
}

// calloc() ---- 의미 : clear-allocate
/*
calloc은 malloc과 달리 할당할 크기와 개수를 매개변수로 사용한다.
calloc(4,3)은 4바이트짜리 3개를 할당하라는 의미
*/