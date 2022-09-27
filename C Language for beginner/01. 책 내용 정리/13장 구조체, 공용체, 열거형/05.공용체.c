// 공용체
/*
하나의 공간(메모리)를 서로 다른 두 변수가 같이 사용하는 것을 말함.
구조체 사용하는 것과 비슷

[ 1byte, 2byte, 3byte, 4byte]
위는 int형 객체의 주소라고 하면,
이 주소가 char형(1byte)가 같이 사용할 수 있다는 의미이다.

공용체 멤버 변수가 여러 개일 때는 그 중 가장 큰 저장 공간이 공용체의 크기가 된다.
*/

#include <stdio.h>

int main(){
    union student {
        int tot;
        char grade;
    };

    union student u;
    
    u.tot = 300;
    u.grade = 'A';

    printf("\n--공용체 활용--\n");
    printf("총점 ==> %d\n", u.tot);
    printf("등급 ==> %c\n", u.grade);
}

// tot에 300을 저장했는데, 다른 값이 나옴 -> 그 이유는 300입력한 후 문자열 A가 1byte에 비집고 들어가기 때문에