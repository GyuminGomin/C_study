#include <stdio.h>

void main(){
    FILE *wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("data7.txt","w");

    for (i=0; i<5; i++)
    {
        printf(" ���� %d : ", i+1);
        scanf("%d", &in);
        hap += in;
    }

    fprintf(wfp, "�հ� ==> %d\n", hap); // (����������, "����", ����� �Ű�������...)

    fclose(wfp);
}