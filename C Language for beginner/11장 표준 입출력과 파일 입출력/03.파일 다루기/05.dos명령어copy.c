#include <stdio.h>

void main(){
    char str[200];
    FILE *rfp;
    FILE *wfp;

    rfp = fopen("c:\\windows\\win.ini","r");
    wfp = fopen("data5.txt", "w");

    for(;;)
    {
        fgets(str, 200, rfp);
        if (feof(rfp))
            break;
        
        fputs(str, wfp);
    }
    fclose(rfp);
    fclose(wfp);
}
// 텍스트 파일에만 적용되고, 이진파일에는 적용되지 않는다. 이진 파일을 읽고 쓰려면 fopen()
// 함수를 사용할 때 읽기 모드의 경우 'rb'를 쓰기 모드의 경우 'wb'를 사용하고 파일을 읽는 경우
// fread() 함수를, 파일을 쓰는 경우 fwrite()함수를 사용해야 한다. 15장에서 더 자세히 배움