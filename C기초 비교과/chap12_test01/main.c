// �迭 ����
#include <stdio.h>
#include <string.h>

void main()
{
	printf("�迭 ����\n");

	short student[10] = {0, }; // �ڹٶ� �ٸ� ���

	student[0] = 90;
	student[1] = 97;
	student[2] = 88;
	student[3] = 66;
	student[4] = 54;
	student[5] = 78;
	student[6] = 92;
	student[7] = 10;
	student[8] = 60;
	student[9] = 70;

	int sum = 0;
	float average = 0.0f;


	for (int i = 0; i < sizeof(student)/sizeof(short); i++) // sizeof(~~) byteũ�⸦ �˷���
	{
		//printf("student[%02d] ������ %02d\n", i, student[i]);
		sum += student[i];
	}
	average = sum / (sizeof(student) / sizeof(short));

	printf("�л� ���� ���� = %d, ��� = %.2f\n", sum, average);

	printf("�����Է� ��\n");

	char data[6] = "Happy";
	char ment[] = "C Programming~";
	printf("%s\n", data);
	printf("%s\n", ment);
	printf("%d\n", strlen(data)); // strlen ���� ���� -> ���ڼ�, strcpy ���ڿ� �����ϴ� ��, strcat-->����(���� ���ڿ��� ����� ���� �̸�, ���� ������ ���ڿ�)

	char data2[] = "abc";
	char data3[] = "def";
	char result[16];

	printf("result = %s\n", result); // �ʱ�ȭ�� �����༭ garbage���� ����
	strcpy(result, data2);
	printf("result = %s\n", result);
	strcat(result, data3); // ���ϴ� ��
	printf("result = %s\n", result);
}
