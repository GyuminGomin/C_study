// 표준 입력 함수
#include <stdio.h>

void main()
{
	/*putchar('A');
	printf("\n");
	puts("Hello World!");
	printf("Hello World!\n");
	printf("%s\n", "Hello World!");*/

	int input_data; // int자료형이여도 상관 x

	while (1)
	{
		printf("단어(한글자) 입력 (종료는 q) : ");
		input_data = getchar(); //putchar() 반대 --> 입력버퍼에 garbage 값이 생긴다.-> abc 입력하면 a만 출력됨
		rewind(stdin); // 입력버퍼에 있는 데이터 다 소멸

		if (input_data == 113) break;

		printf("input : %c\n", input_data);

		char input_s[10]; // 초기화를 안했기 때문에 배열 인덱스를 뺄 수 없다. ( 가능한 효율적이게 )
		gets(input_s);
		printf("input : %s\n", input_s);
	}
	
	/*printf("두번째 단어(한글자) 입력 : ");
	input_data = getchar();
	rewind(stdin);
	printf("두번째 input : %c\n", input_data);*/ // 입력버퍼에 이미 값이 있기 때문에 깜빡거림을 다시 한번 더 하지않고 버퍼에 남아 있는 값 출력
}