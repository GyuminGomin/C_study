// ���� �޸� �Ҵ�

#include <stdio.h>

void main()
{
	int* p_num_list;
	int count = 0, sum = 0, limit = 0;

	printf(" �ִ� ���� �Է� : ");
	scanf_s("%d", &limit);
	// ����ڰ� �Է��� ������ŭ �����޸� �Ҵ�
	p_num_list = (int*)malloc(sizeof(int) * limit);

	while (count<limit)
	{
		printf("���� �Է�(����� 9999) : ");
		scanf_s("%d", p_num_list + count);
		if (*(p_num_list + count) == 9999) break;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (i > 0) printf(" + ");
		printf("%d", *(p_num_list + i));
		sum += *(p_num_list + i);
	}
	printf(" = %d\n", sum);
	free(p_num_list);
}