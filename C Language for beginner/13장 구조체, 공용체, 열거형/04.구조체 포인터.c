#include <stdio.h>

int main(){
    typedef struct _student
    {
        char name[10];
        int kor;
        int eng;
        float avg;
    }student;

    student s;
    student *p;

    p = &s;

    printf("�̸� �Է� : ");
    scanf("%s", p->name);

    printf("���� ���� : ");
    scanf("%d", &p->kor);
    
    printf("���� ���� : ");
    scanf("%d", &p->eng);

    p->avg = (p->kor + p->eng) / 2.0f;

    printf("\n--����ü ������ Ȱ��--\n");
    printf("�л� �̸� ==> %s\n", p->name);
    printf("���� ���� ==> %d\n", p->kor);
    printf("���� ���� ==> %d\n", p->eng);
    printf("��� ���� ==> %5.1f\n", p->avg);
}