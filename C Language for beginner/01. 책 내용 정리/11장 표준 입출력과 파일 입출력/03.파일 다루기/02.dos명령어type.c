#include <stdio.h>

void main(){
    char str[200];
    FILE *rfp;

    rfp = fopen("c:\\windows\\win.ini", "r");

    for (;;)
    {
        fgets(str, 200, rfp); // ���Ͽ��� �� �� �� �о�´�.

        if (feof(rfp)) // ������ ���̶��, for���� �����Ѵ�.
            break;

        printf("%s", str);
    }

    fclose(rfp);
}
// ���� ��ɾ� type ������ ����
// ���� ��ɾ� > type c:\windows\win.ini �� ġ�� �� �ڵ�� ���� ���