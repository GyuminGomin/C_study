// switch 구문
#include <stdio.h>

void main()
{
	int score = 86;
	char grade = 'A';

	printf("switch문 예제");
	switch (score/10)
	{
	case 10: // 100 -----> case뒤에 나오는 수는 "상수"
		// grade = 'A';
		// break;  10과 9는 같으므로 생략 가능
	case 9: // 90 ~ 99
		grade = 'A';
		break;
	case 8 :
		grade = 'B';
		break;
	case 7 :
		grade = 'C';
		break;
	case 6 :
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}
	printf("당신의 학점은 %c입니다.", grade);
}