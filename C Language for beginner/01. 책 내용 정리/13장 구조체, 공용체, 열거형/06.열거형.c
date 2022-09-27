// 열거형
/*
변수가 가질 수 있는 값을 나열해 놓은 것이다.
어떤 변수가 가질 수 있는 값의 범위가 정해져 있다면 정수형보다는 열거형을 쓰는 편이 낫다.

열거형을 사용할 때 꼭 0부터 시작할 필요는 없다.
enum week { sun = 10, mon, tue, wen, thu, fri, sun} 처럼 표시하면, 10부터 시작
중간값을 건너뛰고 사용할 수도 있다.
enum season { spring = 100, summer, autumn = 200, winter};
*/

#include <stdio.h>

int main(){
    enum week {sun, mon, tue, wed, thu, fri, sat};

    enum week ww;

    ww = sat;

    if (ww == sun)
        printf("오늘은 일요일 입니다.\n\n", ww);
    else
        printf("오늘은 일요일이 아닙니다.\n\n", ww);
}