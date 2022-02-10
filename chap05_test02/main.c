#include <stdio.h>

void main()
{
	printf("2번째 test!\n");

	putchar(65); // 글자 하나 찍는 것 출력하면 'A'가 나온다. 97 = 'a' 48 = '0'
	puts("Hello World!");
	puts("\na"); // putchar('a')는 단어, puts("a")는 문자열
}