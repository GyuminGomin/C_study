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
        printf("option�� 1~4�� �Է����ּ���.");
    }
    return result;
}

int main(){
    int res;
    int oper, a, b;

    printf("��� �Է� (1:+, 2:-, 3:*, 4:/ : ");
    scanf("%d", &oper);

    printf("����� �� ���ڸ� �Է� : ");
    scanf("%d %d", &a, &b);

    res = calc(a,b,oper);

    printf("��� ����� : %d\n", res);
}

// ���� ����
/*
main()�Լ����� ������ ù ������ �ϹǷ�
�Լ� calc()�� main�Լ� �ڿ� �ִٸ�, �ν��� ���ϰ� �ȴ�.
���� ���� calc()�� main �ڿ� ���� �ʹٸ�,
main() �Լ� �տ� �� int calc(int a, int b, int oper); ���� �� ����� ��.
*/