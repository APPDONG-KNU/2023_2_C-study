//p.69
/*
#include <stdio.h>
int main(){

	double width, height, area;

	width = 3;
	height = 5;

	area = (width*height)/2.0;

	printf("밑변 = %.6lf cm, 높이 = %.6lf cm인 삼각형의 면적 = %.6lf cm²", width, height, area);
	return 0;
}
*/

//p.82
/*
#include <stdio.h>
int main(){
	int height;
	double weight,std_weight,gap;

	setbuf(stdout,NULL);

	printf("키 : ");
	scanf("%d",&height);

	printf("체중 : ");
	scanf("%lf",&weight);

	std_weight = (height-100)*0.9;
	gap = weight-std_weight;

	printf("\n표준체중 %.1lf과의 차이 : %+.1lf kg ", std_weight, gap);

	return 0;
}

*/

//p.95
/*
#include <stdio.h>
int main(){

	double radian, area, pi;


	setbuf(stdout,NULL);


	printf("반지름을 입력하세요. ");
	scanf("%lf",&radian);

	pi=3.14;
	area = radian*radian*pi;

	printf("반지름이 %.1lf인 원의 면적은 %.2lf입니다.",radian,area);
	;
	return 0;
}
*/

//p.107
/*

#include <stdio.h>
int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수입력:");
	scanf("%d",&x);

	printf("%d는 %s 입니다.",x,(x%2==0)?"짝수":"홀수");




	return 0;
}

*/

//p.112

/*
#include <stdio.h>
int main(){

	char name[10];

	double weight,height,std_weight,gap;

	setbuf(stdout,NULL);

	printf("키(cm)를 입력하세요: ");
	scanf("%lf",&height);

	printf("몸무게(kg)을 입력하세요: ");
	scanf("%lf",&weight);

	fflush(stdin);
	printf("이름을 입력하세요: ");
	gets(name);
	//scanf("%99[^\n]", name);

	std_weight=(height-100)*0.9;
	printf("\n\"%s\"님의 표준체중은 %.1lf kg입니다.",name,std_weight);


	gap = weight-std_weight;


	printf("\n표준체중과의 차이는 %+.1lfkg으로 당신은\"%s\"입니다.",gap,(gap>0)?"비만":"허약");

	return 0;

}
*/


//p.111

/*

#include <stdio.h>
int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오: ");
	scanf("%d",&x);

	printf("%d은 100이하의 %s",x,(x>0&&x<=100)?"자연수 입니다.":"자연수가 아닙니다.");


	return 0;
}
*/

//p.114
/*
#include <stdio.h>
int main(){

	int x,y,a,b,big,small;

	setbuf(stdout,NULL);

	printf("두 정수 입력 : ");
	scanf("%d %d",&x,&y);

	if (x>y){
		big=x;
		small=y;
	}

	else{
		big=y;
		small=x;
	}

	a=big/small;
	b=big%small;

	printf(">>큰 수 / 작은 수 = %d ",a);



	printf("\n>>큰 수 %% 작은 수 = %d ",b);

	return 0;
}
*/

//p.114변형
/*
#include <stdio.h>

int main(){

	int x,y,max,min,a,b;

	setbuf(stdout,NULL);

	printf("두 정수 입력:");
	scanf("%d %d",&x,&y);

	max=(x>y)?x:y;
	min=(x>y)?y:x;



	a=max/min;
	b=max%min;

	printf(">>큰 수 / 작은 수 = %d ",a);



	printf("\n>>큰 수 %% 작은 수 = %d ",b);

	return 0;
}
*/

//p.124

/*

#include<stdio.h>

int main(){

	int x;
	double fx;

	setbuf(stdout,NULL);



	printf("f(x)=x³-2x²+1/x에서 \n");


	printf("x 입력 : ");
	scanf("%d",&x);

	fx=x*x*x-2*x*x+(double)1/x;
	printf("f(%d)= %.1lf",x,fx);



	return 0;
}

*/
//p.134
/*
#include<stdio.h>
int main(){

	int x;

	setbuf(stdout,NULL);

	printf("점수를 입력하세요:");
	scanf("%d",&x);

	if (x>=90){
		printf("우수!\n");
	}

	printf("점수:%d",x);



	return 0;
}

*/

//p.시간분초로 변경

/*
#include <stdio.h>

int main(){

	double sec,min,hour,total_sec;

	setbuf(stdout,NULL);

	printf("초(sec)를 입력하세요: ");
	scanf("%lf",&total_sec);

	hour=sec/3600;
	total_sec%=3600;
	min=(sec%3600)/60.0;
	sec=(total_sec%60.0;

	printf("시간=%.2lf\n분=%.2lf\n초=%.2lf",hour,min,sec);

	return 0;
}

*/


//p.137

/*
#include <stdio.h>

int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오:");
	scanf("%d",&x);

	printf("입력한 수 %d는(은)%s입니다.",x,(x%2==0)?"짝수":"홀수");

	return 0;
}

*/

//p.137 if else 사용
/*
#include<stdio.h>

int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오:");
	scanf("%d",&x);

	if (x%2==0)
			printf("입력한 수 %d는(은) 짝수입니다.",x);

	else
		printf("입력한 수 %d는(은) 홀수입니다.",x);

	return 0;
}


*/

//p.141
/*
#include <stdio.h>

int main(){

	int score;

	setbuf(stdout,NULL);

	printf("점수를 입력하세요:");
	scanf("%d",&score);

	if (score>=90)
		printf("학점:A");

	else if (score>=80)
		printf("학점:B");

	else if(score>=70)
		printf("학점:C");
	else if(score>=60)
		printf("학점:D");

	else
		printf("학점:F");


	return 0;

}
*/

//변형
/*
#include <stdio.h>

int main(){

	int x;
	char score;


	setbuf(stdout,NULL);

	printf("점수를 입력하세요:");
	scanf("%d",&x);

	if (x>=90)
		score='A';

	else if(x>=80) //문자 : 'a'
		          //문자열 : "abc"
		score='B';
	else if(x>=70)
		score='C';
	else if(x>=60)
		score='D';

	else
		score='F';

	printf("학점:%c",score);


	return 0;

}

*/

//3장 puts함수
/*
#include <stdio.h>
int main(){
	 puts("hi");

	return 0;
}
*/

//p.139
/*
#include <stdio.h>
int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오:");
	scanf("%d",&x);

	printf("입력한 수 %d는(은) %s의 %s입니다.",x,(x>0)?"양":"음",(x%2==0)?"짝수":"홀수");



	return 0;
}
*/

//변형
/*
#include <stdio.h>
int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하세요:");
	scanf("%d",&x);

	printf("입력한 수 %d는(은)",x);

	if (x>=0){
		if (x%2==0)
				printf("양의 짝수입니다.");
		else
			printf("양의 홀수입니다.");

	}

	if (x<0){
		if (x%2==0)
				printf("음의 짝수입니다.");
		else
			printf("음의 홀수입니다.");

	}
	return 0;
}
*/

//p.145
/*
#include <stdio.h>
int main(){

	char name[10];
	int kor,eng,math,attend;
	double avr;

	setbuf(stdout,NULL);

	fflush(stdin);
	printf("학생의 이름:");
	scanf("%99[^\n]", &name);

	printf("국어,영어,수학 점수 차례로 입력:");
	scanf("%d %d %d",&kor,&eng,&math);

	printf("출결 점수 입력:");
	scanf("%d",&attend);

	printf("\n===========================");

	avr=(kor+eng+math+attend)/4.0;

	printf("\n네 개 점수의 평균:%.1lf\n",avr);
	printf("출결점수:%d",attend);

	printf("\n===========================\n");

	printf("[%s]학생>>%s",name,(avr>=70&&attend>=80)?"합격!":"불합격!");


	return 0;
}
//--> 이름에 공백 넣고싶을때 : scanf("%99[^\n]", &name);

*/
//gets 활용
/*
#include <stdio.h>
int main(){

	char name[10];
	int kor,eng,math,attend;
	double avr;

	setbuf(stdout,NULL);

	fflush(stdin);
	printf("학생의 이름:");
	gets(name);

	printf("국어,영어,수학 점수 차례로 입력:");
	scanf("%d %d %d",&kor,&eng,&math);

	printf("출결 점수 입력:");
	scanf("%d",&attend);

	printf("\n===========================");

	avr=(kor+eng+math+attend)/4.0;

	printf("\n네 개 점수의 평균:%.1lf\n",avr);
	printf("출결점수:%d",attend);

	printf("\n===========================\n");

	printf("[%s]학생>>%s",name,(avr>=70&&attend>=80)?"합격!":"불합격!");


	return 0;
}
*/


//p.147

/*
#include<stdio.h>
#include<stdlib.h>
int main(){

	int x,y,z;
	char a;

	setbuf(stdout,NULL);

	printf("수식을 입력하시오.\n");
	printf("연산자의 종류:+-*///%%");
//윗줄에/가 세개인 이유는 각주처리가 안되어서 그런것임

/*	printf("\n입력 예:2+3\n");


	printf("\n입력>> ");
	scanf("%d %c %d",&x,&a,&y);

	if(a=='+')
		{z=x+y;
		printf("\n결과>>%d+%d=%d",x,y,z);
		}
	else if(a=='-')
		{z=x-y;
		printf("\n결과>>%d-%d=%d",x,y,z);
		}
	else if(a=='*')
		{z=x*y;
		printf("\n결과>>%d*%d=%d",x,y,z);
		}
	else if(a=='/')
		{z=x/y;
		printf("\n결과>>%d/%d=%d",x,y,z);
		}
	else if(a=='%')
		{z=x%y;
		printf("\n결과>>%d%%%d=%d",x,y,z);
		}
	else
		printf("잘못된 입력입니다.");




	return 0;

}
*/

//p.149
/*
#include <stdio.h>

int main(){

	int a,b,c,D;


	printf("ax^2+bx+c=0의 근을 판별하는 프로그램입니다.");
	printf("\n다음을 입력해 주세요.");

	setbuf(stdout,NULL);
	printf("\na는?");
	scanf("%d",&a);

	printf("b는?");
	scanf("%d",&b);

	printf("c는?");
	scanf("%d",&c);

	D=b*b-4*a*c;
	printf("이차방정식 %dx^2+%dx+%d=0\n판별식 D=%d\n",a,b,c,D);

	if(D>0)
		printf("두개의 실근을 갖습니다.");
	else if(D==0)
		printf("중근을 갖습니다.");
	else
		printf("허근을 갖습니다.");





	return 0;

}
*/

//p.153
/*
#include <stdio.h>
int main(){

	int answer;

	setbuf(stdout,NULL);
	printf("1.입금하기 2.출금하기 3.송금하기");
	printf("\n원하는 메뉴를 선택하시오.");
	scanf("%d",&answer);

	switch(answer)
	{

	  case 1 : printf("입금하기 화면으로 이동합니다.\n");break;
	  case 2 : printf("출금하기 화면으로 이동합니다.\n");break;
	  case 3 : printf("송금하기 화면으로 이동합니다.\n");break;
	  default : printf("잘못된 입력입니다.\n");

	}




	return 0;

}
*/


//p.155

/*
#include<stdio.h>
int main(){

	int month;
    setbuf(stdout,NULL);
	printf("월 입력:");
	scanf("%d",&month);

	switch(month)
	{
	case 1:case 2: case 3: printf(">>1분기 입니다.");break;
	case 4:case 5 : case 6: printf(">>2분기 입니다.");break;
	case 7:case 8:case 9 : printf(">>3분기 입니다.");break;
	case 10:case 11: case 12: printf(">>4분기 입니다.");break;
	default : printf(">>잘못된 월을 입력하였습니다.\n");

	}

	return 0;
}

*/

//p.156
/*
#include <stdio.h>
int main(){

	int x,y;


	setbuf(stdout,NULL);
	printf("점수를 입력하시오:");
	scanf("%d",&x);
	y=x/10.0;

	switch(y)
	{
	case 9 :case 10 : printf("A");break;
	case 8 : printf("B"); break;
	case 7 : printf("C");break;
	case 6 : printf("D");break;
	default : printf("F");
	}

	return 0;
}

*/

//p.159
/*
#include <stdio.h>
#include<stdlib.h>
int main(){

	int x,y,z;
	char a;

	printf("수식을 입력하시오.\n연산자의 종류:+-*///%%\n입력 예:2+3\n");
/*
	setbuf(stdout,NULL);
	printf("입력>>");
	scanf("%d %c %d",&x,&a,&y);

	switch(a)
	{case '+' : printf("결과>>%d+%d=%d",x,y,z=x+y);break;
	case '-' : printf("결과>>%d-%d=%d",x,y,z=x-y);break;
	case '*' : printf("결과>>%d*%d=%d",x,y,z=x*y);break;
	case '/' : printf("결과>>%d/%d=%d",x,y,z=x/y);break;
	case '%' : printf("결과>>%d%%%d=%d",x,y,z=x%y);break;
	default : printf("잘못된 입력입니다.");

	}


	return 0;
}
*/

//p.175
/*
#include<stdio.h>
int main(){

	int i,n;
	double sum;

	setbuf(stdout,NULL);
	printf("임의의 정수 n을 입력하시오:");
	scanf("%d",&n);

	for(i=2;i<=n;i++){
	sum+=(1.0/i);
			printf("1/%d+",i);
	}

		    printf("\b\b=%.1lf\n", sum);


	return 0;
}
*/
/*
#include<stdio.h>
int main(){
	int n;
	double a,b,integral,dx,fx,area,x;

	setbuf(stdout,NULL);
	printf("적분구간 [a,b] 입력하기\n");
	printf("시작 값 a는?");
	scanf("%lf",&a);
	printf("끝 값 b는?");
	scanf("%lf",&b);
	printf("적분구간[%.0lf,%.0lf]구간의 등분수 n은?",a,b);
	scanf("%d",&n);

	dx = (b-a)/n;
	integral=0.0;

	for(x=a; x<b; x+=dx) {
			fx=x*x-1.0/x;
			area=dx*fx;
			integral+=area;}
	printf("f(x)=x²-1/x의 [%.0lf,%.0lf]구간을 %d등분했을 때 적분 근사치 : %.3lf",a,b,n,integral);


	return 0;
}
*/


