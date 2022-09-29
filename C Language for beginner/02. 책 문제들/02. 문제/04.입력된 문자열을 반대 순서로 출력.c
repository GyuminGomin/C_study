// 입력된 문자열을 반대 순서로 출력
/*
열 글자 미만의 문자열을 입력받고, 입력받은 문자열을 반대 순서로 출력하는
프로그램이다.

실행 결과
문자열을 입력 ==> ABCDEFG
GFEDCBA
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char s[10];
    int i;
    printf("문자열을 입력 (10자 이내) ==> ");
    scanf("%s", s);
    for (i = sizeof(s)-1; i>=0; i--){
        printf("%c",s[i]);
    }
}
