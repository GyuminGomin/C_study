// ǥ�� �Է� �Լ�
#include <stdio.h>

void main()
{
	/*putchar('A');
	printf("\n");
	puts("Hello World!");
	printf("Hello World!\n");
	printf("%s\n", "Hello World!");*/

	int input_data; // int�ڷ����̿��� ��� x

	while (1)
	{
		printf("�ܾ�(�ѱ���) �Է� (����� q) : ");
		input_data = getchar(); //putchar() �ݴ� --> �Է¹��ۿ� garbage ���� �����.-> abc �Է��ϸ� a�� ��µ�
		rewind(stdin); // �Է¹��ۿ� �ִ� ������ �� �Ҹ�

		if (input_data == 113) break;

		printf("input : %c\n", input_data);

		char input_s[10]; // �ʱ�ȭ�� ���߱� ������ �迭 �ε����� �� �� ����. ( ������ ȿ�����̰� )
		gets(input_s);
		printf("input : %s\n", input_s);
	}
	
	/*printf("�ι�° �ܾ�(�ѱ���) �Է� : ");
	input_data = getchar();
	rewind(stdin);
	printf("�ι�° input : %c\n", input_data);*/ // �Է¹��ۿ� �̹� ���� �ֱ� ������ �����Ÿ��� �ٽ� �ѹ� �� �����ʰ� ���ۿ� ���� �ִ� �� ���
}