#include <stdio.h>

void main(){
    FILE *wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("data7.txt","w");

    for (i=0; i<5; i++)
    {
        printf(" 숫자 %d : ", i+1);
        scanf("%d", &in);
        hap += in;
    }

    fprintf(wfp, "합계 ==> %d\n", hap); // (파일포인터, "서식", 출력할 매개변수들...)

    fclose(wfp);
}