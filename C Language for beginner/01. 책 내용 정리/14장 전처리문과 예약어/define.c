#include <stdio.h>

#define PI 3.1415926535
#define STR "원의 면적을 계산했습니다.\n"
#define END_MSG printf("프로그램이 종료되었습니다.\n\n")

void main(){
    printf("반지름이 10인 원의 면적은 ==> %10.5f \n", 10*10*PI);

    printf(STR);

    END_MSG;
}

// 예약어 const
/*
const 예약어는 #define과 비슷한 기능을 하지만 조금 다르다.
const로 변수를 선언하면 해당 변수는 변수의 역할을 하는 것이 아니라
상수의 역할을 한다.
cf ) 
    const int a = 100
    #define a 100
#define은 전처리 작업에서 처리되고
const는 컴파일 작업에서 처리된다.
*/

// 예약어 static
/*
static 예약어는 처음 설정된 값을 초기화하지 않고 계속 유지시킨다.

#include <stdio.h>

void myfunc();

void main()
{
    myfunc();
    myfunc();
}

void myfunc()
{
    static int a = 0;

    a += 100;
    printf("a의 값 ==> %d\n", a);
}

결과 -->
    a = 100
    a = 200
*/