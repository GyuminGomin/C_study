#include <stdio.h>

int main(){
    int a, b;
    char ch;

    while (1)
    {
        printf("����� �� ���� �Է� (���߷��� Ctrl+C) : ");
        scanf("%d %d",&a, &b);

        printf("����� ������ �Է� : ");
        scanf(" %c", &ch);

        switch (ch)
        {
        case '+' : printf("%d + %d = %d\n", a, b, a+b); break;
        case '-' : printf("%d - %d = %d\n", a, b, a-b); break;
        case '*' : printf("%d * %d = %d\n", a, b, a*b); break;
        case '/' : printf("%d / %d = %d\n", a, b, a/(float)b); break;
        case '%' : printf("%d %% %d = %d\n", a, b, a%b); break;
        default: printf("�����ڸ� �߸� �Է��߽��ϴ�.\n"); break;
        }
    }
    
}