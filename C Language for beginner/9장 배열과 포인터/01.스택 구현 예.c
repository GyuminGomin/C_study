#include <stdio.h>

int main(){
    char stack[5];
    int top = 0;

    char carName = 'A';
    int select = 9;

    while (select != 3)
    {
        printf("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� : ");
        scanf("%d", &select);

        switch (select)
        {
        case 1 :
            if (top >= 5)
                printf("�ͳ��� �� ���� ���� �� ��\n");
            else{
                stack[top] = carName++;
                printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
                top++;
            }
            break;
        case 2 :
            if (top <= 0)
                printf("�������� �ڵ����� ����\n");
            else{
                top--;
                printf(" %c �ڵ����� �ͳο��� ����\n", stack[top]);
                stack[top] = ' ';
            }
            break;
        case 3 :
            printf("���� �ͳο� %d�밡 ����.\n", top);
            printf("���α׷��� �����մϴ�.\n");
            break;
        default:
            printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
        }
    }
    
}