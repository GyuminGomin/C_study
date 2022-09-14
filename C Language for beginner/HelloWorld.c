#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end;
    double result;
    int i, j;
    int sum = 0;

    start = time(NULL);

    char greet[2];
    printf("Hello World! \n");

    end = time(NULL);
    result = (double)(end - start);
    printf("%f", result);
    return 0;
}

// 빌드 버튼 (ctrl + shift + F9)
// run 버튼 (ctrl + shift + F10)

// 화가나는게 run이 정말 간단한 실행문장이라도 10초이상 걸린다...