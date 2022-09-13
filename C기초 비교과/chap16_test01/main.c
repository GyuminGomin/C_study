// 메모리 동적 할당
#include <stdio.h>
#include <malloc.h>

void main()
{
	char* p_name;
	p_name = (char*)malloc(sizeof(char)*32); //32byte를 할당해달라 (char로 32개의 방을 만든것) return값이 void이므로 주소 자료형을 할당해줘야 한다. 요약) (char*) malloc이 가지고 있는 주소를 넘겨준다.는 의미

	if (p_name != NULL) 
	{
		printf("your name : ");
		gets(p_name);

		printf("Hi~ %s\n", p_name);
		free(p_name); // 메모리 해제
	}
	else {
		printf("메모리 할당 실패\n");
	}
}