#include <stdio.h>

void main(){
    char s[20];
    FILE *wfp;

    wfp = fopen("data3.txt","w");

    printf("���ڿ��� �Է�(�ִ�19��) : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}