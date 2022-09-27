#include <stdio.h>

int main(){
    int a, b;
    char ch;

    while (1)
    {
        printf("계산할 두 수를 입력 (멈추려면 Ctrl+C) : ");
        scanf("%d %d",&a, &b);

        printf("계산할 연산자 입력 : ");
        scanf(" %c", &ch);

        switch (ch)
        {
        case '+' : printf("%d + %d = %d\n", a, b, a+b); break;
        case '-' : printf("%d - %d = %d\n", a, b, a-b); break;
        case '*' : printf("%d * %d = %d\n", a, b, a*b); break;
        case '/' : printf("%d / %d = %d\n", a, b, a/(float)b); break;
        case '%' : printf("%d %% %d = %d\n", a, b, a%b); break;
        default: printf("연산자를 잘못 입력했습니다.\n"); break;
        }
    }
    
}