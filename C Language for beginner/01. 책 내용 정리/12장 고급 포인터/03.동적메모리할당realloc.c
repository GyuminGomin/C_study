/*
realloc()�� ���ʷ� Ȯ���� �޸��� ũ�⸦ ������ �� ����Ѵ�.

����
������ ���� = (������ ������ ��������*) realloc(�⺻ ������, ������ ������ �������� ũ�� x �ʿ��� ũ��);
ex.
���� p�� ũ��(����)�� 10���� �����ϰ� �ʹٸ� ������ ���� �Ѵ�.
p = (int*) realloc(p, sizeof(int) * 10)

���α׷��� ������ �� ����ڰ� �Է��� �������� ������ �̸� �Է��ϴ� ����� �� ũ�⸸ŭ �޸𸮸�
Ȯ���ϸ� �ȴ�. ������ ����ڰ� 0�� �Է��� ������ ��� �޸𸮿� �����ؾ� �ϴ� ���α׷��̶��
realloc() �Լ��� ����� �޸��� ũ�⸦ �ǽð����� �����ؾ� �Ѵ�.
*/

#include <stdio.h>
#include <malloc.h> // �޸� ���� �Լ��� ����� ��

int main(){
    int *p;
    int i, hap = 0;
    int cnt = 0;
    int data;

    p = (int*) malloc(sizeof(int) * 1);
    printf(" 1 ��° ���� : ");
    scanf("%d", &p[0]);
    cnt++;

    for(i=2; ; i++)
    {
        printf(" %d ��° ���� : ", i);
        scanf("%d", &data);

        if (data != 0){
            p = (int*) realloc(p, sizeof(int)*i);
        }
        else
            break;

        p[i-1] = data;
        cnt++;
    }

    for(i=0;i<cnt;i++){
        hap += p[i];
    }

    printf("�Է� ���� �� ==> %d\n", hap);

    free(p);
}