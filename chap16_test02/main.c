// 기존 방식 배열 사용
#include <stdio.h>
#define MAX_COUNT 5 // 배열을 코드내에서 선언하면, 콘솔창에서 입력값을 바꿀 수 있는 방법이 아무리 생각해도 없다. 따라서 동적 메모리 할당 방법을 사용한다.

void main()
{
	int num[MAX_COUNT] = { 0, }, count = 0, sum = 0;
	while (count < MAX_COUNT) // 0 < 5
	{
		printf("숫자를 입력하세요(종료는 9999입력)\n");
		scanf("%d", num + count); // 맞다 여긴 주소받아오는 거였지
		if (num[count] == 9999) break;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (i > 0) printf(" + ");
		printf("%d", num[i]);
		sum += num[i];
	}
	printf(" = %d\n", sum);
}