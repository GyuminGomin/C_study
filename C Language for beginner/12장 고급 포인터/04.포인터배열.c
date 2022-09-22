// 포인터 배열
/*
먼저 2차원 배열을 생각해 보았을 때,
char s[3][100];
3행, 100열이므로 3개의 문자열을 만들 수 있는데,
그렇게 s[1], s[2], s[3] 에 문자열을 할당해도 100자리를 다 쓰지 못하고 남는공간이 생기면 데이터
의 남는 공간이 생겨 효율적이지 못하다.
따라서 이때 필요한 것이 포인터 배열이다.
*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(){
    char *p[3];
    char imsi[100];
    int i, size;

    for (i=0; i<3; i++){
        printf(" %d 번째 문자열 : ", i+1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char*) malloc((sizeof(char) * size) + 1);

        strcpy(*(p+i), imsi);
    }

    printf("\n - 입력과 반대로 출력(포인터) -\n");
    for(i=2;i>=0;i--){
        printf(" %d : %s\n", i+1, p[i]);
    }

    for(i=0; i<3; i++){
        free(p[i]);
    }
}