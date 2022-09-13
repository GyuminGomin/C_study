// 파일 입출력1
#include <stdio.h>

void main()
{
	/*FILE* p_file = fopen("test.txt", "wt");
	if (p_file != NULL)
	{
		fprintf(p_file, "Hello, world!\n");
		short data = 0x0412;
		fprintf(p_file, "%x\n", data);
		fclose(p_file);
		printf("파일 작성 성공~!");
	}
	else {
		printf("test.txt 파일열기 실패!");
	}*/
	char temp[100];

	FILE* p_file = fopen("test.txt", "rt");
	if (NULL != p_file) {
		while (EOF != fscanf(p_file, "%s", temp)) // EOF는 읽어온 파일의 전체의 마지막 부분, 값은 -1
		{
			printf("%s\n", temp);
		}
		fclose(p_file);
	}
	else
	{
		printf("파일 읽기 실패.");
	}
}