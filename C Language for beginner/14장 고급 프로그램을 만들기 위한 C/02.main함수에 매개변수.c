#include <stdio.h>

int main(int argc, char *argv[]){
    char str[200];
    FILE *rfp;

    if (argc != 2){
        printf("\n --�Ű������� 1�� ����ϼ���.\n");
        return 0;
    }

    rfp=fopen(argv[1],"r");

    for(;;){
        fgets(str, 199, rfp);

        if (feof(rfp))
            break;
    
        printf("%s", str);
    }

    fclose(rfp);
    
}