// ���� ��ɾ� type
/*
type '�����̸�'�� ���� �������� ������ ���� �� �� �ִ�.
�̰��� main()�Լ��� �Ű������� �������ִ� �Ͱ� ����ϴ�.

main �Լ��� �帧
int main(int argc, char *argv[]) {}
���������Ʈ���� '�����̸�.exe 100 200'�� �Է����ָ�, main()�Լ��� argc�� 3 �� ����.
�׸��� *argv[]���� ���ڿ����� 3���� ����. ( �����̸�.exe, 100, 200)
*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    printf(" argc �Ű����� ==> %d\n", argc);

    for(i=0;i<argc;i++){
        printf(" argv[%d] �Ű����� ==> %s\n", i, argv[i]);
    }
}