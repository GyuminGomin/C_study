// if���� Ȱ���� ���� + �������� ����
/*
if ������ ����,����,����,������ �� �ϳ��� �����Ͽ� ����ϴ� ���α׷��̴�.
���� ���
ù��° ����� ���� �Է��ϼ���. ==> 1000
<1>���� <2>���� <3>���� <4>������ ==> 2
�ι�° ����� ���� �Է��ϼ���. ==> 122
 1000 - 122 = 878
*/

#include <stdio.h>
#include <stdbool.h> // boolean�� ���� ���� ���

void main()
{
    int a,b;
    int c;
    bool f = true;

    printf("ù��° ����� ���� �Է��ϼ���. ==> ");
    scanf("%d", &a);

    while (f)
    {
        printf("�ι�° ����� ���� �Է��ϼ���. ==> ");
        scanf("%d", &b);
        printf("<1>���� <2>���� <3>���� <4>������ ==> ");
        scanf("%d", &c);

        if (c == 1 || c ==2 || c ==3 || c == 4)
        {
            if (c == 4)
            {
                if (b == 0) {
                    printf("0���� ���� �� �����ϴ�.\n");
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
            printf("1,2,3,4�� ������ �Է����ּ���.\n");
            continue;
        }
    }
}
