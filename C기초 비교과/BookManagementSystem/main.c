#pragma comment (lib, "libmysql.lib") // ���� �� �߰��� ���̺귯���� ���ڴٴ� ǥ�� --> �ݵ�� �ʼ�!!

#include <Winsock2.h> // ���ͳݿ��� ��Ʈ��ũ ����ϱ� ���� �Լ����� �������� ��ó���� --> ������ �߿��ϴ�
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> // system�� �� �ִ�.
#include <my_global.h>
#include <mysql.h>
#include <string.h>
#include <locale.h>

#define mysqlip "127.0.0.1" // db���� ���� ip (������ ����)
#define port 3306
#define username "root"
#define password "" // ��ȣ�� ������ �ۼ� �ʼ�
#define schema "bms"

typedef struct bookInfo { // Ÿ���� ���� �����ϴ� �� ex. unsigned int -> size_t
	int id;
	char title[100];
	char writer[100];
	char genre[50];
	char release_date[15];
	int pages;
	char company[50];
	int price;
} book;

void insert_book(MYSQL*, book*); // å���� �Է�
void display_books(MYSQL*); // å ���� ��ü ��ȸ
void update_book(MYSQL*, book*); // å ���� ����
void delete_book(MYSQL*, book*); // å ���� ����

int main()
{
	// printf("MySQL info = %s\n", mysql_get_client_info());
	setlocale(LC_ALL, "Korean"); // �̰� ��������� �ѱ�� �������� ����. (������ ���� - �ѱ���� �ϰڴ� ��� �ǹ�)
	MYSQL* conn;
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // ������ ���� ����
	unsigned int num_fields;
	unsigned long* lengths;

	book myBook;
	int input;
	

	conn = mysql_init(NULL); // �ƹ��ų� ���� ����� ���� �ʱ�ȭ ��Ű�� �Ŷ�
	mysql_real_connect(conn, mysqlip, username, password, schema, port, NULL, 0);

	if (conn == NULL) {
		printf("���� ����! %s\n", mysql_error(conn));
		return EXIT_FAILURE;
	}
	// printf("���Ἲ��!\n");


	while (1)
	{
		system("cls"); // �ܼ� ȭ�� Ŭ����
		printf("å���� ���α׷� (v 1.0)\n");
		printf("1. å��ȸ\n");
		printf("2. å�Է�\n");
		printf("3. å����\n");
		printf("4. å����\n");
		printf("6. ���α׷� ����\n");
		printf(" �Է� > ");
		scanf("%d", &input);
		rewind(stdin); // ���۸� �� �����ϴ� ��

		switch (input)
		{
		case 1: // å ��ȸ
			display_books(conn);
			system("pause");
			break;
		case 2: // å �Է�
			insert_book(conn, &myBook);
			system("pause"); // � Ű�� ������ ������ �����ִ� ��
			break;
		case 3: // å ����
			update_book(conn, &myBook);
			system("pause"); // � Ű�� ������ ������ �����ִ� ��
			break;
		case 4: // å ����
			delete_book(conn, &myBook);
			system("pause"); // � Ű�� ������ ������ �����ִ� ��
			break;
		case 6 : // ���α׷� ����
		default:
			mysql_close(conn);
			printf(" ���α׷��� ����Ǿ����ϴ�.\n");
			return EXIT_SUCCESS; // EXIT_SUCCESS �ִ´ٸ�, �ؿ� �ƿ� ������ �ȵȴ�.
		}
	}

	return EXIT_SUCCESS;
}

void display_books(MYSQL* conn)
{
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // ������ ���� ����
	unsigned int num_fields;
	unsigned long* lengths;

	// ���� DB ���� �������� ����
	query_stat = mysql_query(conn, "SELECT * FROM books_info");
	if (query_stat != 0) {
		printf("��������! : %s\n", mysql_error(conn));
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

	printf("å�̸�(�ʼ�) : ");
	gets(book->title);
	//scanf("%[^\n]s", book->title); // ������ ����ϴ� ���ڿ��� ����� �� ���� and -> �� �ּҸ� ����Ű�� �����Ѱ�..
	//rewind(stdin);

	printf("���ڸ�(�ʼ�) : ");
	gets(book->writer);
	//scanf("%[^\n]s", book->writer); // ������ ����ϴ� ���ڿ��� ����� �� ���� and -> �� �ּҸ� ����Ű�� �����Ѱ�..
	//rewind(stdin);

	printf("�帣 : ");
	gets(book->genre);
	
	printf("������(ex 2020-01-30) : ");
	gets(book->release_date);

	printf("������ �� (ex 200) : ");
	scanf("%d", &book->pages); // gets ���� ���ڴϱ� ������ �ٲ�����Ѵ�. �� ����� ���ŷο��� �̷��� �ۼ�


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
		%d) ", book->title, book->writer, book->genre, book->release_date, book->pages); // �� query��� �迭�ȿ� �� ���� ������� ������ �־��ְڴٴ� �Լ� and %d�� ���ڰ� �ƴϹǷ� ''�� �ʿ䰡 ����.

	if (mysql_query(conn, query) != 0)
	{
		printf("�Է¿���! : %s\n", mysql_error(conn));
	}
}

void update_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };
	MYSQL_RES* result;
	MYSQL_ROW row;
	int query_stat; // ������ ���� ����
	unsigned int num_fields;
	unsigned long* lengths;


	printf("������ å��ȣ �Է� : ");
	scanf("%d", &book->id);
	rewind(stdin);

	sprintf(query, "SELECT * FROM books_info WHERE id = %d", book->id);

	// ���� DB ���� �������� ����
	query_stat = mysql_query(conn, query);
	if (query_stat != 0) {
		printf("��������! : %s\n", mysql_error(conn));
		mysql_close(conn);
		return EXIT_FAILURE;
	}

	printf("���� ����\n");
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

	// å ������ �Է�
	printf("å�̸�(�ʼ�) : ");
	gets(book->title);
	//scanf("%[^\n]s", book->title); // ������ ����ϴ� ���ڿ��� ����� �� ���� and -> �� �ּҸ� ����Ű�� �����Ѱ�..
	//rewind(stdin);

	printf("���ڸ�(�ʼ�) : ");
	gets(book->writer);
	//scanf("%[^\n]s", book->writer); // ������ ����ϴ� ���ڿ��� ����� �� ���� and -> �� �ּҸ� ����Ű�� �����Ѱ�..
	//rewind(stdin);

	printf("�帣 : ");
	gets(book->genre);

	sprintf(query,
		"UPDATE books_info \
		SET \
		title = '%s', \
		writer = '%s', \
		genre = '%s' \
		WHERE id = %d" , book->title, book->writer, book->genre, book->id); // �� query��� �迭�ȿ� �� ���� ������� ������ �־��ְڴٴ� �Լ� and %d�� ���ڰ� �ƴϹǷ� ''�� �ʿ䰡 ����.

	if (mysql_query(conn, query) != 0)
	{
		printf("��������! : %s\n", mysql_error(conn));
	}
}

void delete_book(MYSQL* conn, book* book)
{
	char query[500] = { 0, };

	printf("������ å��ȣ �Է� : ");
	scanf("%d", &book->id); // rewind�� �� ������ enter ���� �� ��������
	rewind(stdin);

	sprintf(query,
		"DELETE FROM books_info \
		WHERE id = %d ", book->id); // �� query��� �迭�ȿ� �� ���� ������� ������ �־��ְڴٴ� �Լ� and %d�� ���ڰ� �ƴϹǷ� ''�� �ʿ䰡 ����.

	if (mysql_query(conn, query) != 0)
	{
		printf("��������! : %s\n", mysql_error(conn));
	}
}