#include <stdio.h>

void main(){
    char ch;

    printf("문자열을 입력하세요. : ");

    ch = getchar(); // 문자 한 자를 입력받는다.
    putchar(ch); // 버퍼에서 한 자를 읽어 모니터에 출력한다.

    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);

    // enter가 입력버퍼에 들어가므로, 2글자를 넣으면 14행에 실행된 버퍼에
    // enter가 들어가므로 출력이 AB(enter)가 되고
    // 3글자를 넣으면 enter가 들어갈 자리가 없으므로 출력이 ABC가 된다.
}