#include <stdio.h>

void main(){
    char s[20];
    FILE *wfp;

    wfp = fopen("data3.txt","w");

    printf("문자열을 입력(최대19자) : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}