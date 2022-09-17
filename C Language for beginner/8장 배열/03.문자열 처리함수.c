#include <stdio.h>
#include <string.h> // 문자열 함수의 목록이 정의된 string.h 파일을 포함하라는 의미

int main(){
    char ss[] = "XYZ";
    

    /*
    strlen()함수
    */
    int len;
    len = strlen(ss); // 문자열 길이 \0을 제외한 (char 의 맨마지막에 꼭 있어야하는 것)
    printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len );
    

    /*
    strcpy()함수
    */
    char sss[4];
    // sss = ss; 이렇게 선언 불가능 (오류뜸)
    // char sss[4] = ss; 이렇게 선언 가능
    strcpy(sss, ss); // 배열 sss에 ss를 저장하라
    // ss가 4개의 자리를 차지하므로, sss도 4개이상의 자리를 차지해야 한다.
    printf("문자열 sss의 내용 ==> %s \n", sss);


    /*
    strcat()함수
    */
    char ssss[7] = "XYZ";
    strcat(ssss, ss); // ssss에 ssss+ss 한 문자열을 넣어준다.
    printf("이어진 문자열 ssss의 내용 ==> %s \n", ssss);

    /*
    strcat()함수
    */
    char tt[] = "xyz";
    int r;
    r = strcmp(tt, ss); // 문자열 tt-ss해서 0이면 같은 문자, 그 외의 숫자는 다른 문자
    // 아스키코드 값 tt에서 아스키코드 값 ss를 빼준 값을 반환
    // 어느 컴파일러는 tt > ss 일때 1, ss==tt 일 때 0, tt < ss 일때 -1 반환
    printf("두 문자열의 비교 결과 ==> %d \n", r);
}