/*
realloc()은 최초로 확보한 메모리의 크기를 변경할 때 사용한다.

형식
포인터 변수 = (포인터 변수의 데이터형*) realloc(기본 포인터, 포인터 변수의 데이터형 크기 x 필요한 크기);
ex.
만일 p의 크기(개수)를 10으로 변경하고 싶다면 다음과 같이 한다.
p = (int*) realloc(p, sizeof(int) * 10)

프로그램을 시작할 때 사용자가 입력할 데이터의 개수를 미리 입력하는 방식은 그 크기만큼 메모리를
확보하면 된다. 하지만 사용자가 0을 입력할 때까지 계속 메모리에 저장해야 하는 프로그램이라면
realloc() 함수를 사용해 메모리의 크기를 실시간으로 변경해야 한다.
*/

#include <stdio.h>
#include <malloc.h> // 메모리 관련 함수를 사용할 때

int main(){
    int *p;
    int i, hap = 0;
    int cnt = 0;
    int data;

    p = (int*) malloc(sizeof(int) * 1);
    printf(" 1 번째 숫자 : ");
    scanf("%d", &p[0]);
    cnt++;

    for(i=2; ; i++)
    {
        printf(" %d 번째 숫자 : ", i);
        scanf("%d", &data);

        if (data != 0){
            p = (int*) realloc(p, sizeof(int)*i);
        }
        else
            break;

        p[i-1] = data;
        cnt++;
    }

    for(i=0;i<cnt;i++){
        hap += p[i];
    }

    printf("입력 숫자 합 ==> %d\n", hap);

    free(p);
}