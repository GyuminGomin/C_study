// getch()
/*
키보드를 통해 문자 하나를 입력받으며, 입력한 내용을 모니터에 보여주지 않는다.
*/

// getche()
/*
키보드를 통해 문자 하나를 입력받으며, 입력한 내용을 모니터에 보여준다.
getch e(echo-마지막)을 의미
*/

// getchar()
/*
사용자가 키보드로 enter를 누를 때까지 입력한 것을 메모리(버퍼)에 모두 저장
해놓고(enter도 저장됨) 그중에서한 문자만 꺼낸다.
*/

// putchar()
/*
표준 출력 장치(모니터)에 문자 하나를 출력한다.
*/

// putch()
/*
putchar()와 기능이 동일하다.
*/

#include <stdio.h>
#include <conio.h>

void main(){
    char ch;
    // char ch1;
    // char ch2;

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    // ch1 = getche();
    // putchar(ch1); // getche()는 putch, putchar같이 안써도 됨

    // ch2 = getchar();
    // putch(ch2);
}