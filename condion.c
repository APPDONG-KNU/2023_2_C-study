//#include <stdio.h>
//#include <time.h>
//
//int main(void)
//{
//	////if (����) {   } else {   }
//	//int age = 25;
//	//if (age >= 20)
//	//{
//	//	printf("�Ϲ����Դϴ�\n");
//	//} 
//	//else
//	//{
//	//	printf("�л�.�Դϴ�\n");
//	//}
//
//	//if/ else if/ else
//
//	//break, continue
//	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ������ǥ�� �մϴ�.
//	//for (int i = 1; i <= 30; i++)
//	//{
//	//	if (i >= 6)
//	//	{
//	//		printf("������ �л��� ���� ������\n");
//	//		break;// for�� Ż��
//	//	}
//	//	printf("%d�� �л��� ���� ������ �غ��ϼ���.\n", i);
//
//	//}
//	//1������ 30�� ������ �ݿ��� 7�� �л��� ���ļ� �Ἦ 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���.
////	for (int i = 1; i <= 30; i++)
////	{
////		if (i >= 6 && i <= 10)
////		{
////			if (i == 7)
////			{
////				printf("7�� �л��� �Ἦ�Դϴ�.\n");
////				continue; //���� ���� �������� �ʰ� i++�� �̾���
////			}
////			printf("%d�� �л��� ���� ������ �غ��ϼ���.\n", i);
////
////		}
////
////	}
//
//
//
//// &&->and. ||->or(�� �� �ϳ��� �����ص� ��)
//
////����0����1��2
//
//	//srand(time(NULL));
//	//int i = rand() % 3;//0~2���� ��ȯ
//	//if (i == 0)
//	//{
//	//	printf("����\n");
//	//}
//
//	//else if(i==1)
//	//{
//	//	printf("����\n");
//	//}
//	//else if (i == 2)
//	//{
//	//	printf("�� \n");
//	//}
//	//else {
//	//	printf("�����\n");
//	//}
//
//	//switch Ȱ�� i=n�̸� (����) ����
//	//srand(time(NULL)); //���� �ʱ�ȭ
//	//int i = rand() % 3;//0~2���� ��ȯ
//	//switch (i)
//	//{
//	//case0:printf("����\n");break;
//	//case1:printf("����\n");break;
//	//case2:printf("��\n");break;
//	//default:printf("�����\n");break;//default=else
//	//}
//
//	//break ���� ���� �ѹ��� �����ָ� ��
//	/*int age = 12;
//	switch (age)
//	{
//	case 8:
//	case 9:
//	case 10: printf("���г��Դϴ�.\n"); break;
//	case 11:
//	case 12: 
//	case 13: printf("���г��Դϴ�.\n"); break;
//
//	}*/
//
//
//	return 0;
//}

////  UP&down
//strand(time(NULL));
//int num = rand() % 100 + 1; //1~100������ ����
//printf("����:%d\n", num);
//int answer = 0; //����
//int chance = 5; //��ȸ
//while (chance > 0)
//{
//	printf("���� ��ȸ %d�� \n", chance--);
//	printf("���ڸ� ���������� (1~100):");
//	scanf("%d", &answer);
//
//	if (answer > num) {
//		printf("down\n");
//	}
//
//	else if (answer < num) {
//		printf("up\n");
//	}
//
//	else if (answer == num) {
//		printf("�����Դϴ�.\n"); break;
//	}
//	else {printf("�˼����� ������ �߻��߽��ϴ�.") }
//
//
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h> 
//
//int main(void) 
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0;i <= n;i++)
//		sum +=i;
//	printf("%d", sum);
//	return 0;
//}

//���� 25314�� 
//#pragma warning(disable:4996)
//#include<stdio.h> 
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 0;i < n/4;i++)
//		printf("long ");
//	printf("int")
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h> 
//
//int main(void)
//{
//	int n;
//	scanf("%d\n", &n);
//	for (int i = 1;i <= n;i++)
//	{
//		int a, b;
//		scanf("%d %d\n", &a,&b);
//		printf("Case #%d:%d\n", i,a + b);
//	}
//
//		return 0;
//}



//
//#include <stdio.h>
//int main() {
//	int t, a, b;
//	scanf("%d", &t);
//
//	for (int i = 1; i <= t; i++) {
//		scanf("%d %d", &a, &b);
//		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
//	}
//	return 0;
//}

//2439�� �����ʺ��� �����
//#include <stdio.h>
//int main() {
//	int n,;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i;j < n;j++)
//			printf(" ");
//		for (int k = 1;k <= i;k++)
//			printf("*");
//
//	}printf("\n")
//		return 0;
//}





















































