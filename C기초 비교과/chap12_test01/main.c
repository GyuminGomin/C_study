// 배열 연습
#include <stdio.h>
#include <string.h>

void main()
{
	printf("배열 연습\n");

	short student[10] = {0, }; // 자바랑 다른 방식

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


	for (int i = 0; i < sizeof(student)/sizeof(short); i++) // sizeof(~~) byte크기를 알려줌
	{
		//printf("student[%02d] 점수는 %02d\n", i, student[i]);
		sum += student[i];
	}
	average = sum / (sizeof(student) / sizeof(short));

	printf("학생 성적 총합 = %d, 평균 = %.2f\n", sum, average);

	printf("성적입력 끝\n");

	char data[6] = "Happy";
	char ment[] = "C Programming~";
	printf("%s\n", data);
	printf("%s\n", ment);
	printf("%d\n", strlen(data)); // strlen 길이 측정 -> 글자수, strcpy 문자열 복사하는 것, strcat-->결합(기존 문자열이 저장된 변수 이름, 새로 덧붙일 문자열)

	char data2[] = "abc";
	char data3[] = "def";
	char result[16];

	printf("result = %s\n", result); // 초기화를 안해줘서 garbage값이 나옴
	strcpy(result, data2);
	printf("result = %s\n", result);
	strcat(result, data3); // 더하는 것
	printf("result = %s\n", result);
}
