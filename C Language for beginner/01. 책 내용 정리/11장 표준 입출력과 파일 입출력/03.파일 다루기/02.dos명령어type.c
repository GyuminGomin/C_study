#include <stdio.h>

void main(){
    char str[200];
    FILE *rfp;

    rfp = fopen("c:\\windows\\win.ini", "r");

    for (;;)
    {
        fgets(str, 200, rfp); // 파일에서 한 줄 씩 읽어온다.

        if (feof(rfp)) // 파일의 끝이라면, for문을 종료한다.
            break;

        printf("%s", str);
    }

    fclose(rfp);
}
// 도스 명령어 type 구현과 같음
// 도스 명령어 > type c:\windows\win.ini 를 치면 위 코드와 같은 결과