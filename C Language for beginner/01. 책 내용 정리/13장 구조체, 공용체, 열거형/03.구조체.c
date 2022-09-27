#include <stdio.h>
#include <string.h>

int main(){
    typedef struct _student
    {
        char name[10];
        int kor;
        int eng;
        float avg;
    }student;

    student s[3];
    
    int i;

    strcpy(s[0].name, "Kim");
    s[0].kor = 90;
    s[0].eng = 80;
    s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

    strcpy(s[1].name, "Lee");
    s[1].kor = 70;
    s[1].eng = 60;
    s[1].avg = (s[1].kor + s[1].eng) / 2.0f;

    strcpy(s[2].name, "Park");
    s[2].kor = 50;
    s[2].eng = 40;
    s[2].avg = (s[2].kor + s[2].eng) / 2.0f;

    printf("--구조체 배열--\n");
    for(i=0;i<3;i++){
        printf("학생 이름 ==> %s\n", s[i].name);
        printf("국어 점수 ==> %d\n", s[i].kor);
        printf("영어 점수 ==> %d\n", s[i].eng);
        printf("평균 점수 ==> %5.1f\n", s[i].avg);
        printf("\n");
    }
}