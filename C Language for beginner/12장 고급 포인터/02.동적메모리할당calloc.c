#include <stdio.h>
#include <malloc.h>

int main(){
    int *p, *s;
    int i, j;

    printf("malloc() �Լ� ���\n");
    p = (int*) malloc(sizeof(int)*3);

    for(i=0;i<3;i++){
        printf("�Ҵ�� ���� �ʱⰪ p[%d] ==> %d\n", i, p[i]);
    }

    free(p);

    printf("\ncalloc()�Լ� ���\n");
    s = (int*) calloc(sizeof(int),3); // calloc�Լ��� ,�� ����ϳ� ����.

    for(j=0;j<3;j++){
        printf("�Ҵ�� ���� �ʱⰪ s[%d] ==> %d\n", j, s[j]);
    }

    free(s);
}

// calloc() ---- �ǹ� : clear-allocate
/*
calloc�� malloc�� �޸� �Ҵ��� ũ��� ������ �Ű������� ����Ѵ�.
calloc(4,3)�� 4����Ʈ¥�� 3���� �Ҵ��϶�� �ǹ�
*/