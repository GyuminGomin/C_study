// 구구단
#include <stdio.h>

void main()
{
	printf("구구단 시작\n");
	for (int i = 2; i <= 9; i++) {
		// if (i == 8) break; // 8단부터 보기싫다.
		if (i == 7) continue; // 7단만 보기 싫다. cf) continue를 만나면 이 밑에를 실행하지 않고 for문 다시 시작
		printf("%d단 시작\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %02d ", i, j, i * j);
		}
		printf("\n");
	}
}