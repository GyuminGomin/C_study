#include <stdio.h>

int main(){
    struct student
    {
        char name[10];
        int kor;
        int eng;
        float avg;
    };
    
    struct student s;
    
    printf("�̸� : ");
    scanf("%s", s.name, 9);

    printf("���� ���� : ");
    scanf("%d", &s.kor);
    
    printf("���� ���� : ");
    scanf("%d", &s.eng);
    
    s.avg = (s.kor + s.eng) / 2.0f;

    printf("\n--����ü Ȱ��--\n");
    printf("�л� �̸� ==> %s\n", s.name);
    printf("���� ���� ==> %d\n", s.kor);
    printf("���� ���� ==> %d\n", s.eng);
    printf("��� ���� ==> %5.1f\n", s.avg);
}