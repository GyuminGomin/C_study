// �޸� ���� �Ҵ�
#include <stdio.h>
#include <malloc.h>

void main()
{
	char* p_name;
	p_name = (char*)malloc(sizeof(char)*32); //32byte�� �Ҵ��ش޶� (char�� 32���� ���� �����) return���� void�̹Ƿ� �ּ� �ڷ����� �Ҵ������ �Ѵ�. ���) (char*) malloc�� ������ �ִ� �ּҸ� �Ѱ��ش�.�� �ǹ�

	if (p_name != NULL) 
	{
		printf("your name : ");
		gets(p_name);

		printf("Hi~ %s\n", p_name);
		free(p_name); // �޸� ����
	}
	else {
		printf("�޸� �Ҵ� ����\n");
	}
}