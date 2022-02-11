#pragma comment (lib, "libmysql.lib") // 조금 전 추가한 라이브러리를 쓰겠다는 표현

#include <stdio.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <my_global.h>
#include <mysql.h>

int main()
{
	printf("MySQL info = %s\n", mysql_get_client_info());
	
	system("pause"); // 어떤 키를 누르기 전까지 멈춰있는 것
	return EXIT_SUCCESS; // return 0
}