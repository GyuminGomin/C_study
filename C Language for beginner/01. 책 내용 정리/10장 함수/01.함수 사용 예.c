#include <stdio.h>

int calc(int v1, int v2, int op)
{
    int result;

    switch (op)
    {
    case 1 : result = v1 + v2; break;
    case 2 : result = v1 - v2; break;
    case 3 : result = v1 * v2; break;
    case 4 : result = v1 / v2; break;

    default:
        printf("option을 1~4만 입력해주세요.");
    }
    return result;
}

int main(){
    int res;
    int oper, a, b;

    printf("계산 입력 (1:+, 2:-, 3:*, 4:/ : ");
    scanf("%d", &oper);

    printf("계산할 두 숫자를 입력 : ");
    scanf("%d %d", &a, &b);

    res = calc(a,b,oper);

    printf("계산 결과는 : %d\n", res);
}

// 참고 사항
/*
main()함수에서 무조건 첫 시작을 하므로
함수 calc()가 main함수 뒤에 있다면, 인식을 못하게 된다.
따라서 만약 calc()을 main 뒤에 쓰고 싶다면,
main() 함수 앞에 꼭 int calc(int a, int b, int oper); 만을 꼭 써줘야 함.
*/