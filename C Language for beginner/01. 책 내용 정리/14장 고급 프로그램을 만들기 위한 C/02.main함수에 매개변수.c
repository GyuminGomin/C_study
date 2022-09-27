#include <stdio.h>

int main(int argc, char *argv[]){
    char str[200];
    FILE *rfp;

    if (argc != 2){
        printf("\n --매개변수를 1개 사용하세요.\n");
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