// if문을 활용한 계산기 + 오류없는 계산기
/*
if 문으로 덧셈,뺄셈,곱셈,나눗셈 중 하나를 선택하여 계산하는 프로그램이다.
실행 결과
첫번째 계산할 값을 입력하세요. ==> 1000
<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> 2
두번째 계산할 값을 입력하세요. ==> 122
 1000 - 122 = 878
*/

#include <stdio.h>
#include <stdbool.h> // boolean을 쓰기 위한 헤드

void main()
{
    int a,b;
    int c;
    bool f = true;

    printf("첫번째 계산할 값을 입력하세요. ==> ");
    scanf("%d", &a);

    while (f)
    {
        printf("두번째 계산할 값을 입력하세요. ==> ");
        scanf("%d", &b);
        printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
        scanf("%d", &c);

        if (c == 1 || c ==2 || c ==3 || c == 4)
        {
            if (c == 4)
            {
                if (b == 0) {
                    printf("0으로 나눌 수 없습니다.\n");
                    continue;
                }
            }
            switch (c)
            {
            case 1 :
                printf(" %d + %d = %d\n", a,b,a+b);
                f = false;
                break;
            case 2 :
                printf(" %d - %d = %d\n", a,b,a-b);
                f = false;
                break;
            case 3 :
                printf(" %d * %d = %d\n", a,b,a*b);
                f = false;
                break;
            case 4 :
                printf(" %d / %d = %d\n", a,b, a/b);
                f = false;
                break;
            default :
                break;
            }
        }
        else 
        { 
            printf("1,2,3,4중 에서만 입력해주세요.\n");
            continue;
        }
    }
}
