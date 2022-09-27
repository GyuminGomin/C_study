#include <stdio.h>

void main(){
    FILE *rfp;
    int hap = 0;
    int in, i;

    rfp = fopen("data2.txt","r");

    for (i=0; i<5; i++){
        fscanf(rfp, "%d", &in); // (파일포인터, 서식, 입력할 매개변수들)
        hap = hap + in;
    }
    printf("합계 ==> %d\n", hap);

    fclose(rfp);
}