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
// �ؽ�Ʈ ���Ͽ��� ����ǰ�, �������Ͽ��� ������� �ʴ´�. ���� ������ �а� ������ fopen()
// �Լ��� ����� �� �б� ����� ��� 'rb'�� ���� ����� ��� 'wb'�� ����ϰ� ������ �д� ���
// fread() �Լ���, ������ ���� ��� fwrite()�Լ��� ����ؾ� �Ѵ�. 15�忡�� �� �ڼ��� ���