#include <stdio.h>

void main(){
    FILE *rfp;
    int hap = 0;
    int in, i;

    rfp = fopen("data2.txt","r");

    for (i=0; i<5; i++){
        fscanf(rfp, "%d", &in); // (����������, ����, �Է��� �Ű�������)
        hap = hap + in;
    }
    printf("�հ� ==> %d\n", hap);

    fclose(rfp);
}