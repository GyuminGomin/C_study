#include <stdio.h>
#include <string.h>

int main(){
    // 문자열 입력 받는 함수 gets()
    /*
    scanf()와 비슷하지만 더 유용
    gets(입력받을 문자 배열)
    - 최대 입력 문자는 널 문자를 고려해 '배열 크기 -1'까지 입력해야 함
    */

    // 문자열 출력 하는 함수 puts()
    /*
    printf()와 비슷하지만 더 유용
    printf()와 달리 \n이 없어도 자동으로 줄 넘김
    */

    char ss[20];
    char tt[20];
    int r1, r2;

    puts("첫번째 문자열을 입력하세요.");
    gets(ss);

    puts("두번째 문자열을 입력하세요.");
    gets(tt);

    r1 = strlen(ss);
    r2 = strlen(tt);

    printf("첫번째 문자열의 길이 ==> %d \n", r1);
    printf("두번째 문자열의 길이 ==> %d \n", r2);

    if (strcmp(ss, tt) == 0)
    {
        puts("두 문자열의 내용이 같습니다.");
    }
    else {
        puts("두 문자열의 내용이 다릅니다.");
    }
}