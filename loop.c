#pragma warning<disable:4996>
#include <stdio.h>
// �ݺ���
//++ �Ի� ++a->++(���ϱ� 1)������ �����ϰ� ������ ������. a++->������ �����ϰ� a�� ���ϱ� 1�� �ض�.

// 1. for��->for(����; ����; ����)
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
//// 2. while��-> while(����) { } 
//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("��� ���� %d\n", i++);
//	}
//	return 0;
//}



// 3. do { } while {����}
//int main(void)
//{
//	int i = 1;
//	do
//	{printf("��� ���� %d\n", i++);
//	} while (i <= 10);
//	
//	return 0;
//}
 

//���� �ݺ���
//int main(void)
//{
//	for (int i = 1;i <= 3;i++)
//	{
//		printf("ù��° �ݺ���: %d\n", i);
//
//		for (int j = 1;j <= 5;j++)
//		{
//			printf("  �ι�° �ݺ���: %d\n", j);
//		}
//	}
//	return 0;
//}

//���߹ݺ��� �̿��Ͽ� ������ ¥��

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

//���� �ݺ��� ����ġ��
//1) *�� �Ƕ�̵� �����
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

//���� �ݺ��� (�Ųٷ� ��)

//
//int main(void)
//{
//	for (int i = 0;i <= 4;i++)
//	{
//		for (int j = i;j <5-1;j++)
//	    {
//			printf("$");    �����$�� ��ü
//		}
//		for (int k = 0;k <= i;k++)
//		{
//			printf("*");  �ʿ��� ������ŭ ���
//		}printf("\n");
//	}
//	return 0;
//}

//�Ƕ�̵� �����
//int main(void)
//{
//	int floor;
//	printf("�������� �װڴ°�??");
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

 








































































