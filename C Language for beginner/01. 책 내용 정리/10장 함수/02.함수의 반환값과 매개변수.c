// 반환값이 없는 함수
/*
void - 함수를 실행한 결과로 돌려줄 것이 없는 경우에는 함수의 데이터 형을 void
로 쓴다. void는 아무것도 반환할 것이 없다는 의미로 '무치형'이라고도 부른다.
*/
// 매개변수 전달 방법
/*
값으로 전달하는 (call by value) 방법
주소로 전달하는 (call by reference) 방법
*/
#include <stdio.h>

void func1(int a)
{
    a = a+1;
    printf("전달받은 a ==> %d\n", a);
}

void func2(int *a)
{
    *a = *a + 1;
    printf("전달받은 a ==> %d\n", *a);
}

void main()
{
    int a = 10;
    func1(a);
    printf("func1() 실행 후의 a ==> %d\n", a);
    func2(&a);
    printf("func2() 실행 후의 a ==> %d\n", a);
}
// 참고사항
/*
int *a; // 주소를 저장할 수 있는 포인터 변수를 선언한다.
int b = 10; // 정수형 변수이다.
a = &b; // a에 b의 주소를 대입한다.
*a = 20; // a가 가리키는 곳의 실제 값을 20으로 변경한다.

int main()으로 main()함수도 int형으로 선언했다. 그래서 원칙적으로 main()함수
의 맨 아래에 'return 정수값;' 과 같은 반환값을 지정해야 하지만, main()함수의
끝이 프로그램의 끝이여서 return문을 사용하지 않아도 별 문제가 없었다.
그래서 void main()으로 main()함수를 선언해도 아무런 문제가 없다.
*/