// 중첩조건문 (날짜 테스트)
#include <stdio.h>

void main()
{
	int year = 2021, month = 12, day = 31;
	// day를 하루 증가
	day++; // day = 32가 됨
	if (day >31)
	{
		month++; // 13월은 없기 때문에
		day = 1; // 32일을 1일로 변경
		if (month>12)
		{
			year++;
			month = 1;
		}
	}
	printf("현재 날짜는 %d년 %d월 %d일 입니다.\n", year, month, day);
}