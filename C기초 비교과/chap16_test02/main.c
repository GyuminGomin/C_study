// ���� ��� �迭 ���
#include <stdio.h>
#define MAX_COUNT 5 // �迭�� �ڵ峻���� �����ϸ�, �ܼ�â���� �Է°��� �ٲ� �� �ִ� ����� �ƹ��� �����ص� ����. ���� ���� �޸� �Ҵ� ����� ����Ѵ�.

void main()
{
	int num[MAX_COUNT] = { 0, }, count = 0, sum = 0;
	while (count < MAX_COUNT) // 0 < 5
	{
		printf("���ڸ� �Է��ϼ���(����� 9999�Է�)\n");
		scanf("%d", num + count); // �´� ���� �ּҹ޾ƿ��� �ſ���
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