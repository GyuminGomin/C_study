#include <stdio.h>

int main(){
    int menu;

    do
    {
        printf("�մ� �ֹ��Ͻðڽ��ϱ�?\n");
        printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1 : printf("#ī��� �ֹ��ϼ̽��ϴ�.\n"); break;
        case 2 : printf("#īǪġ�� �ֹ��ϼ̽��ϴ�.\n"); break;
        case 3 : printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n"); break;
        case 4 : printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
        default: printf("�߸� �ֹ��ϼ̽��ϴ�.\n"); break;
        }
    } while (menu != 4);
    
}