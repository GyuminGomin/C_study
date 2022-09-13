//  중첩 if문 연습2
#include <stdio.h>

void main()
{
	int score = 86;
	char grade = 'A';

	/*
	if (score > 90) {
		grade = 'A';
	}
	else
	{
		if (score >= 80)
		{
			grade = 'B';
		}
		else
		{
			if (score >= 70)
			{
				grade = 'C';
			}
			else
			{
				if (score >= 60) {
					grade = 'D';
				}
				else
				{
					grade = 'F';
				}
			}
		}
	}
	printf("당신의 학점은 %c입니다.\n", grade);
	*/
	if (score > 90) {
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >=70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	printf("당신의 학점은 %c입니다.\n", grade);
}