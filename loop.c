#pragma warning<disable:4996>
#include <stdio.h>
// 반복문
//++ 뿔뿔 ++a->++(더하기 1)동작을 수행하고 문장을 끝내라. a++->문장을 수행하고 a에 더하기 1을 해라.

// 1. for문->for(선언; 조건; 증감)
//int main(void)
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("hello world %d\n", i);
//	}
//
//	return 0;
//}
//
//// 2. while문-> while(조건) { } 
//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("헬로 월드 %d\n", i++);
//	}
//	return 0;
//}



// 3. do { } while {조건}
//int main(void)
//{
//	int i = 1;
//	do
//	{printf("헬로 월드 %d\n", i++);
//	} while (i <= 10);
//	
//	return 0;
//}
 

//이중 반복문
//int main(void)
//{
//	for (int i = 1;i <= 3;i++)
//	{
//		printf("첫번째 반복문: %d\n", i);
//
//		for (int j = 1;j <= 5;j++)
//		{
//			printf("  두번째 반복문: %d\n", j);
//		}
//	}
//	return 0;
//}

//이중반복문 이용하여 구구단 짜기

//int main(void)
//{
//	for (int i = 1;i <= 10;i++) 
//	{
//		for (int j = 1;j <= 10;j++)
//			printf("%d*%d=%d  ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//이중 반복문 파헤치기
//1) *로 피라미드 만들기
//
//int main(void)
//{
//	for (int i = 1;i <= 5;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("*");
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//이중 반복문 (거꾸로 별)

//
//int main(void)
//{
//	for (int i = 0;i <= 4;i++)
//	{
//		for (int j = i;j <5-1;j++)
//	    {
//			printf("$");    빈공간$로 대체
//		}
//		for (int k = 0;k <= i;k++)
//		{
//			printf("*");  필요한 개수만큼 출력
//		}printf("\n");
//	}
//	return 0;
//}

//피라미드 만들기
//int main(void)
//{
//	int floor;
//	printf("몇층으로 쌓겠는가??");
//	scanf_s("%d", &floor);
//
//	for (int i = 0;i < floor;i++)
//	{
//		for (int j = i;j < floor - 1;j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0;k < i*2+1;k++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	return 0;
//}
//

 








































































