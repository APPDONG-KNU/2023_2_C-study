//#include <stdio.h>
//#include <time.h>
//
//int main(void)
//{
//	////if (조건) {   } else {   }
//	//int age = 25;
//	//if (age >= 20)
//	//{
//	//	printf("일반인입니다\n");
//	//} 
//	//else
//	//{
//	//	printf("학생.입니다\n");
//	//}
//
//	//if/ else if/ else
//
//	//break, continue
//	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.
//	//for (int i = 1; i <= 30; i++)
//	//{
//	//	if (i >= 6)
//	//	{
//	//		printf("나머지 학생은 집에 가세요\n");
//	//		break;// for문 탈출
//	//	}
//	//	printf("%d번 학생은 조별 과제를 준비하세요.\n", i);
//
//	//}
//	//1번부터 30번 까지의 반에서 7번 학생은 아파서 결석 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
////	for (int i = 1; i <= 30; i++)
////	{
////		if (i >= 6 && i <= 10)
////		{
////			if (i == 7)
////			{
////				printf("7번 학생은 결석입니다.\n");
////				continue; //이후 문장 실행하지 않고 i++로 이어짐
////			}
////			printf("%d번 학생은 조별 과제를 준비하세요.\n", i);
////
////		}
////
////	}
//
//
//
//// &&->and. ||->or(둘 중 하나만 충족해도 됨)
//
////가위0바위1보2
//
//	//srand(time(NULL));
//	//int i = rand() % 3;//0~2사이 반환
//	//if (i == 0)
//	//{
//	//	printf("가위\n");
//	//}
//
//	//else if(i==1)
//	//{
//	//	printf("바위\n");
//	//}
//	//else if (i == 2)
//	//{
//	//	printf("보 \n");
//	//}
//	//else {
//	//	printf("몰라요\n");
//	//}
//
//	//switch 활용 i=n이면 (조건) 실행
//	//srand(time(NULL)); //난수 초기화
//	//int i = rand() % 3;//0~2사이 반환
//	//switch (i)
//	//{
//	//case0:printf("가위\n");break;
//	//case1:printf("바위\n");break;
//	//case2:printf("보\n");break;
//	//default:printf("몰라요\n");break;//default=else
//	//}
//
//	//break 범위 끝에 한번만 적어주면 됨
//	/*int age = 12;
//	switch (age)
//	{
//	case 8:
//	case 9:
//	case 10: printf("저학년입니다.\n"); break;
//	case 11:
//	case 12: 
//	case 13: printf("고학년입니다.\n"); break;
//
//	}*/
//
//
//	return 0;
//}

////  UP&down
//strand(time(NULL));
//int num = rand() % 100 + 1; //1~100사이의 숫자
//printf("숫자:%d\n", num);
//int answer = 0; //정답
//int chance = 5; //기회
//while (chance > 0)
//{
//	printf("남은 기회 %d번 \n", chance--);
//	printf("숫자를 맞혀보세요 (1~100):");
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
//		printf("정답입니다.\n"); break;
//	}
//	else {printf("알수없는 오류가 발생했습니다.") }
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

//백준 25314번 
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

//2439번 오른쪽부터 별찍기
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





















































