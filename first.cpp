/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	FILE* f = NULL;
	int ch;
	f = fopen("sample.txt", "w");
	if (f == NULL) {
		printf("파일 생성 실패\n");
		return 1;
	}
	while ((ch = fgetc(stdin)) != EOF)
		putc(ch, f);
	fclose(f);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	char* str[10] = { "kingdom\n","king\n","queen\n","prince\n","princess\n",NULL };
	FILE* fp;
	char tmp[20];
	int i = 0;

	if ((fp = fopen("DATA@>txt", "wt")) == NULL)
	{
		printf("file open error.\n");
		exit(1);
	}
}*/
/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char name[20];
	int salary, cn = 0;

	if ((fp = fopen("DATA3.txt", "wt")) == NULL)
	{
		printf("can not open file\n");
		exit(1);

	}

	while (1)
	{
		printf("성명? (입력 종료:end)");
		gets(name);
		if (!stcmp(name, "end"))
			break;
		printf("월급?");
		scanf("%d%*c", &salary);

		fprintf(fp,)
	}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
/*void print_array(int arr[], int size, FILE* st);
int main(void)
{
	int arr[] = { 90,80,70,60,100,89,80,50,40 };
	int size = sizeof(arr) / sizeof(arr[0]);
	FILE* f = NULL;
	printf("파일명:");
	gets_s(filename, sizeof(filename));
	f = fopen(filename, "w");
	if (f==NULL)

}*/
/*#define SIZE 5
int main(void)
{
	int i, buf[SIZE] = { 10,20,30,40,50 };
	FILE* f = NULL;
	f = fopen("sample.bin", "wb");
	if (f == NULL)
	{
		printf("파일 열기 실패");return 1;
	}

	fwrite(buf, sizeof(int), SIZE, f);
	fclose(f);*/

/*struct EMP { char name[20]; char telno[20]; int salary; }
int main()
{
	FILE* fp;
	struct EMP emps[3] = { {"김나리","111-0001",150000}, {"까꿍이","222-0002",1700000}, {"한송이","333-0003",950000} };
	struct EMP temp;

}*/
/*void main()
{
	char name[4], nos[3], buf[12], ch;
	int no, i, kth; long post;
	FILE* dfp;
	dfp = fopen("data.txt", "w");
	for (; ;)
	{
		printf("입력할까요?(y/n)");
		scanf("%c", &ch); fflush(stdin);
		if (ch == 'n')
			break;
		printf("이름 번호 주소\n");
		scanf("%s %s %s", name, nos, buf);
		fflush(stdin);
		fprintf(dfp, "%s %s %s", name, nos, buf);
		fprintf(dfp, "%s %s %s", name, nos, buf);

	}
	fclose(dfp);
	dfp = fopen("data.txt", "r");
	fseek(dfp, 0L, SEEK_END);
	printf("\n몇 번째 데이터를 읽을까요?(종료999)");

}*/
void main()
{
	char name[7], fname[21], ans;
	FILE* fp;
	printf("파일명 입력:");
	scanf("%s%*c", fname);
	fp = fopen(fname, "a+");
	for (; ;)
	{
		printf("입력할까요?"); scanf("%s%*c", &ans);
		if (ans == 'n') break;
		printf("이름:"); scanf("%s%*c", name);
		fprintf(fp, "%-8s", name);

	}
	fflush(fp);
}



































}






















