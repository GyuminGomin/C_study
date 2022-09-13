// 주석입니다. 주석은 컴파일에 영향이 없습니다.
/*
	여러줄 주석입니다.
	여러줄로 주석을 사용할 수 있습니다.
*/

#include <stdio.h> // 전처리기 프리 컴파일러 (컴파일러에 작업 지시) standard input output

void main() // 괄호안에 void를 생략 (entry point라 부름) 두개 이상 있으면 안됨 -> 뒤의 괄호안 void는 'main함수로 전달되는 정보가 정해지지 않았다.'는 의미
{
	// 아래는 두 값을 더한 평균입니다.
	// double average = (10 + 30) / 2;
	// printf("%1.1f\n", average);
	printf("Hello, World!!!"); // 제일 처음 C를 만들면서 만든 소스 예제가 이거다. 1972년경
}