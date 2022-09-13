// 함수 만들기
#include <stdio.h>
#include "main.h" // 내가 새로 만든 것

#define MAX_COUNT 3
#define PI 3.141592 // Java의 static이랑 비슷하다.
#define POW_VALUE(a) a*a // 간단한 명령문 (함수처럼 사용) --> 매크로 함수 (Macro Function)

int sum(int x, int y) // 피 호출자(callee) 
{	
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
	int result = x + y;
	return result;
}
void main() // 호출자(caller) -- > main 반환값을 int로 하면 return (반환값)이 무조건 들어가야함 cf) 함수에서 return값을 만나면 함수 자체가 끝나버린다.
			// return 1; 을 넣으면 오류가 나서 종결, return 0;은 정상적으로 종료
			// main 함수는 무조건 int main(), void main() 두개밖에 없다.
			// main이 위에 있고 sum이 아래있다고 가정 (오류발생) --> 오류발생 안시킬려면, main 위에 int sum(int x, int y); 선언 해주면 됨 cf) parameter의 x, y를 없애줘도 무상관
{
	int a = 45, b = 20;
	int sum_result = 0;
	// 함수호출
	sum_result = sum(a, b);
	printf("a와 b의 합 : %d 입니다.\n", sum_result);

	// 전처리기 사용 #define
	int count = MAX_COUNT;
	printf("%d\n", count);

	printf("%d\n", POW_VALUE(7));
}