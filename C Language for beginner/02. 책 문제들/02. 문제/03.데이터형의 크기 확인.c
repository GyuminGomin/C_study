// 데이터형의 크기 확인
/*
sizeof()함수를 사용해서 각 데이터형의 크기를 확인하는 프로그램이다.

실행 결과
int 형의 크기               ==> 4
unsigned int 형의 크기      ==> 4
short 형의 크기             ==> 2
unsigned short 형의 크기    ==> 2
long int 형의 크기          ==> 4
unsigned long int 형의 크기 ==> 4
float 형의 크기             ==> 4
double 형의 크기            ==> 8
long double 형의 크기       ==> 8
char 형의 크기              ==> 1
unsigned char형의 크기      ==> 1
*/

#include <stdio.h>

void main()
{
    printf("int 형의 크기               ==> %d\n", sizeof(int));
    printf("unsigned int 형의 크기      ==> %d\n", sizeof(unsigned int));
    printf("short 형의 크기             ==> %d\n", sizeof(short));
    printf("unsigned short 형의 크기    ==> %d\n", sizeof(unsigned short));
    printf("long int 형의 크기          ==> %d\n", sizeof(long int));
    printf("unsigned long int 형의 크기 ==> %d\n", sizeof(unsigned long int));
    printf("float 형의 크기             ==> %d\n", sizeof(float));
    printf("double 형의 크기            ==> %d\n", sizeof(double));
    printf("long double 형의 크기       ==> %d\n", sizeof(long double));
    printf("char 형의 크기              ==> %d\n", sizeof(char));
    printf("unsigned char 형의 크기     ==> %d\n", sizeof(unsigned char));
}