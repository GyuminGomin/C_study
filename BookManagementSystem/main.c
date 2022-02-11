#pragma comment (lib, "libmysql.lib") // 조금 전 추가한 라이브러리를 쓰겠다는 표현 --> 반드시 필수!!

#include <Winsock2.h> // 인터넷에서 네트워크 통신하기 위한 함수들을 쓰기위한 전처리기 --> 순서가 중요하다
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> // system이 들어가 있다.
#include <my_global.h>
#include <mysql.h>
#include <string.h>
#include <locale.h>

#define mysqlip "127.0.0.1" // db서버 접속 ip (지금은 내꺼)
#define port 3306
#define username "root"
#define password "" // 암호가 있으면 작성 필수
#define schema "bms"

typedef struct bookInfo { // 타입을 새로 정의하는 것 ex. unsigned int -> size_t
	int id;
	char title[100];
	char writer[100];
	char genre[50];
	char release_date[15];
	int pages;
	char company[50];
	int price;
} book;

void insert_book(MYSQL*, book*); // 책정보 입력
void display_books(MYSQL*); // 책 정보 전체 조회
void update_book(MYSQL*, book*); // 책 정보 수정
void delete_book(MYSQL*, book*); // 책 정보 삭제

int main()
{
	// printf("MySQL info = %s\n", mysql_get_client_info());
	setlocale(LC_ALL, "Korean"); // 이걸 집어넣으면 한국어가 깨질일이 없다. (로케일 설정 - 한국어로 하겠다 라는 의미)
	MYSQL* conn;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // 실행한 쿼리 상태
	unsigned int num_fields;
	unsigned long* lengths;

	book myBook;
	int input;
	

	conn = mysql_init(NULL); // 아무거나 들어가도 상관이 업다 초기화 시키는 거라서
	mysql_real_connect(conn, mysqlip, username, password, schema, port, NULL, 0);

	if (conn == NULL) {
		printf("연결 오류! %s\n", mysql_error(conn));
		return EXIT_FAILURE;
	}
	// printf("연결성공!\n");


	while (1)
	{
		system("cls"); // 콘솔 화면 클리어
		printf("책관리 프로그램 (v 1.0)\n");
		printf("1. 책조회\n");
		printf("2. 책입력\n");
		printf("3. 책수정\n");
		printf("4. 책삭제\n");
		printf("6. 프로그램 종료\n");
		printf(" 입력 > ");
		scanf("%d", &input);
		rewind(stdin); // 버퍼를 다 정리하는 것

		switch (input)
		{
		case 1: // 책 조회
			display_books(conn);
			system("pause");
			break;
		case 2: // 책 입력
			insert_book(conn, &myBook);
			system("pause"); // 어떤 키를 누르기 전까지 멈춰있는 것
			break;
		case 3: // 책 수정
			update_book(conn, &myBook);
			system("pause"); // 어떤 키를 누르기 전까지 멈춰있는 것
			break;
		case 4: // 책 삭제
			delete_book(conn, &myBook);
			system("pause"); // 어떤 키를 누르기 전까지 멈춰있는 것
			break;
		case 6 : // 프로그램 종료
		default:
			mysql_close(conn);
			printf(" 프로그램이 종료되었습니다.\n");
			return EXIT_SUCCESS; // EXIT_SUCCESS 넣는다면, 밑에 아예 실행이 안된다.
		}
	}

	return EXIT_SUCCESS;
}

void display_books(MYSQL* conn)
{
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // 실행한 쿼리 상태
	unsigned int num_fields;
	unsigned long* lengths;

	// 실제 DB 내용 가져오는 로직
	query_stat = mysql_query(conn, "SELECT * FROM books_info");
	if (query_stat != 0) {
		printf("쿼리오류! : %s\n", mysql_error(conn));
		mysql_close(conn);
		return EXIT_FAILURE;
	}

	result = mysql_store_result(conn);
	num_fields = mysql_num_fields(result);
	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("[%s], ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}
}

void insert_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };

	printf("책이름(필수) : ");
	gets(book->title);
	//scanf("%[^\n]s", book->title); // 공백을 허용하는 문자열을 사용할 수 있음 and -> 는 주소를 가리키는 간단한것..
	//rewind(stdin);

	printf("저자명(필수) : ");
	gets(book->writer);
	//scanf("%[^\n]s", book->writer); // 공백을 허용하는 문자열을 사용할 수 있음 and -> 는 주소를 가리키는 간단한것..
	//rewind(stdin);

	printf("장르 : ");
	gets(book->genre);
	
	printf("출판일(ex 2020-01-30) : ");
	gets(book->release_date);

	printf("페이지 수 (ex 200) : ");
	scanf("%d", &book->pages); // gets 쓰면 숫자니까 형식을 바꿔줘야한다. 그 방식이 번거로워서 이렇게 작성


	sprintf(query,
		"INSERT INTO books_info \
		(title, \
		writer, \
		genre, \
		release_date, \
		pages) \
		VALUES \
		('%s', \
		'%s', \
		'%s', \
		'%s', \
		%d) ", book->title, book->writer, book->genre, book->release_date, book->pages); // 이 query라는 배열안에 그 다음 문장들을 복사해 넣어주겠다는 함수 and %d는 문자가 아니므로 ''가 필요가 없다.

	if (mysql_query(conn, query) != 0)
	{
		printf("입력오류! : %s\n", mysql_error(conn));
	}
}

void update_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // 실행한 쿼리 상태
	unsigned int num_fields;
	unsigned long* lengths;


	printf("수정할 책번호 입력 : ");
	scanf("%d", &book->id);
	rewind(stdin);

	sprintf(query, "SELECT * FROM books_info WHERE id = %d", book->id);

	// 실제 DB 내용 가져오는 로직
	query_stat = mysql_query(conn, query);
	if (query_stat != 0) {
		printf("쿼리오류! : %s\n", mysql_error(conn));
		mysql_close(conn);
		return EXIT_FAILURE;
	}

	printf("기존 정보\n");
	result = mysql_store_result(conn);
	num_fields = mysql_num_fields(result);
	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("[%s], ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}

	// 책 수정값 입력
	printf("책이름(필수) : ");
	gets(book->title);
	//scanf("%[^\n]s", book->title); // 공백을 허용하는 문자열을 사용할 수 있음 and -> 는 주소를 가리키는 간단한것..
	//rewind(stdin);

	printf("저자명(필수) : ");
	gets(book->writer);
	//scanf("%[^\n]s", book->writer); // 공백을 허용하는 문자열을 사용할 수 있음 and -> 는 주소를 가리키는 간단한것..
	//rewind(stdin);

	printf("장르 : ");
	gets(book->genre);

	sprintf(query,
		"UPDATE books_info \
		SET \
		title = '%s', \
		writer = '%s', \
		genre = '%s' \
		WHERE id = %d" , book->title, book->writer, book->genre, book->id); // 이 query라는 배열안에 그 다음 문장들을 복사해 넣어주겠다는 함수 and %d는 문자가 아니므로 ''가 필요가 없다.

	if (mysql_query(conn, query) != 0)
	{
		printf("수정오류! : %s\n", mysql_error(conn));
	}
}

void delete_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };

	printf("삭제할 책번호 입력 : ");
	scanf("%d", &book->id); // rewind를 안 넣으면 enter 값이 들어감 끝나고나서
	rewind(stdin);

	sprintf(query,
		"DELETE FROM books_info \
		WHERE id = %d ", book->id); // 이 query라는 배열안에 그 다음 문장들을 복사해 넣어주겠다는 함수 and %d는 문자가 아니므로 ''가 필요가 없다.

	if (mysql_query(conn, query) != 0)
	{
		printf("삭제오류! : %s\n", mysql_error(conn));
	}
}