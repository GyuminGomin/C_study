#include <stdio.h>

void main(){
    char s[20];
    FILE *rfp;

    rfp = fopen("data1.txt", "r");

    fgets(s, 20, rfp); // (문자배열, 읽을 최대 문자 수, 파일 포인터);

    printf("파일에서 읽은 문자열 : ");
    puts(s);

    fclose(rfp);
}

// 이유는 모르겠지만, 파일 읽는거는 명령프롬프트에서 실행해야겠다. (제대로 안나옴)