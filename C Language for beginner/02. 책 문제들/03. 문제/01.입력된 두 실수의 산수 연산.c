// 입력된 두 실수의 산수 연산
/*
실수를 입력받아 두 수의 다양한 연산을 출력하는 프로그램이다.

실행결과
첫번째 계산할 값을 입력하세요. ==> 10
두번째 계산할 값을 입력하세요. ==> 20
10.00 + 20.00 = 30.00
10.00 - 20.00 = -10.00
10.00 * 20.00 = 200.00
10.00 / 20.00 = 0.50
10 % 20 = 10
*/

#include <stdio.h>

void main()
{
    float a,b;

    printf("첫번째 계산할 값을 입력하세요. ==> ");
    scanf("%f", &a);
    printf("두번째 계산할 값을 입력하세요. ==> ");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a,b,a+b);
    printf("%.2f - %.2f = %.2f\n", a,b,a-b);
    printf("%.2f * %.2f = %.2f\n", a,b,a*b);
    printf("%.2f / %.2f = %.2f\n", a,b,a/b);
    printf("%d %% %d = %d\n", (int)a,(int)b,(int)a % (int)b);
}