// ������
#include <stdio.h>

void main()
{
	printf("������ ����\n");
	for (int i = 2; i <= 9; i++) {
		// if (i == 8) break; // 8�ܺ��� ����ȴ�.
		if (i == 7) continue; // 7�ܸ� ���� �ȴ�. cf) continue�� ������ �� �ؿ��� �������� �ʰ� for�� �ٽ� ����
		printf("%d�� ����\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %02d ", i, j, i * j);
		}
		printf("\n");
	}
}