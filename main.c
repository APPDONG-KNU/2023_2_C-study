//1주차
/*
#include <stdio.h>

int main() {
	printf("생년월일: 2004년 3월 15일\n");
	printf("이름: 임은지");

return 0;
}
*/
//2주차
/*
#include <stdio.h>

int main() {
	double width,height;
	double area;

	width = 3.0;
	height = 5.0;

	area = width*height/2.0;

	printf("밑변=%.6lfcm, 높이=%.6lfcm인 삼각형의 면적=%.6lfcm^2", width, height, area);

	return 0;
}
*/
//결과
/*
 *밑변=3.000000cm, 높이=5.000000cm인 삼각형의 면적=7.500000cm^2
 */
//3주차
/*
#include <stdio.h>

int main() {
	int height;
	double weight;
	double s_weight;

	height = 143;
	weight = 40.0;

	s_weight = (height-100)*0.9;

	printf("키: %d\n체중: %.1lf\n표준체중 %.1lf과의 차이:%+.1lf", height, weight, s_weight, weight-s_weight);

	return 0;
}
*/
//결과
/*
키: 143
체중: 40.0
표준체중 38.7과의 차이:+1.3
 */
/*
#include <stdio.h>

int main() {
	double radian,area;
	double pi;

	setbuf(stdout,NULL);

	pi = 3.14;

	printf("반지름을 입력하세요.");
	scanf("%lf", &radian);

    area = radian*radian*pi;

	printf("반지름이 %.2lf인 원의 면적은 %.2lf입니다.", radian, area);

	return 0;
}
*/
//결과
/*
반지름을 입력하세요.3.5
반지름이  3.50인 원의 면적은 38.47입니다.
 */
//scanf에는 아무것도 넣지 말자 #%.1lf

//4주차
/*
#include <stdio.h>

int main() {

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오: ");
	scanf("%d",&x);

	방법1(x>0&&x<=50)? printf("%d는 100이하의 자연수입니다.",x):printf("%d는 100이하의 정수가 아닙니다.",x);
    방법2 printf("%d는 100이하의 %s",x,(x>0&&x<=50)? "자연수입니다":"자연수가 아닙니다");

	return 0;

}
*/
//결과
/*
정수를 입력하시오: -50
-50는 100이하의 자연수가 아닙니다
 */
/*
#include <stdio.h>

int main() {
	char name[10];
	double height, weight, std_weight;
	double x;

	setbuf(stdout,NULL);

	printf("키(cm)를 입력하세요: ");
	scanf("%lf",&height);

	printf("몸무게(kg)를 입력하세요: ");
	scanf("%lf",&weight);

	fflush(stdin);
	printf("이름을 입력하세요: ");
	scanf("%s",&name);

	std_weight = ((height-100)*0.9);
	x = (weight-std_weight);

	printf("\"%s\"님의 표준체중은 %.1lfkg입니다.\n",name,std_weight);
    printf("표준체중과의 차이는 %+.1lfkg으로 당신은\"%s\"입니다.\n", x,(x>0)?"비만":"허약");

	return 0;
}
*/
/*
키(cm)를 입력하세요: 175.7
몸무게(kg)를 입력하세요: 75
이름을 입력하세요: 홍길동
"홍길동"님의 표준체중은 68.1kg입니다.
표준체중과의 차이는 +6.9kg으로 당신은"비만"입니다.
 */
/*
키(cm)를 입력하세요: 175.7
몸무게(kg)를 입력하세요: 65
이름을 입력하세요: 홍길동
"홍길동"님의 표준체중은 68.1kg입니다.
표준체중과의 차이는 -3.1kg으로 당신은"허약"입니다.
 */


//6주차
/*#include <stdio.h>

int main() {

	int i,n;
	double sum;

	setbuf(stdout,NULL);

	printf("임의의 정수n을 입력하시오: ");
	scanf("%d",&n);

	for (i=2;i<=n;i++)
	{
		sum+=(1.0/(double)i);
		printf("1/%d+",i);

	}
	printf("\b\b=%.1lf\n",sum);

	return 0;
}
*/

/*#include <stdio.h>

int main() {

	int i,n;
	double integral,dx,x,fx,a,b,area;

	setbuf(stdout,NULL);

	printf("적분 구간[a,b]입력하기\n");

	printf("시작 값 a는?");
	scanf("%lf",&a);

	printf("끝 값 b는?");
	scanf("%lf",&b);

	printf("적분 구간[%.0lf,%.0lf]의 등분수n은?",a,b);
	scanf("%d",&n);

	dx = (b-a)/n;
	integral = 0.0;

	for(x=a;x<b;x+=dx)
	{
		fx=x*x-1.0/x;
	    area=dx*fx;
		integral+=area;

	}

	printf("x^2-1/x의 [%.0lf, %.0lf]구간을 %d등분했을 때 적분 근사치: %.3lf",a,b,n,integral);


   return 0;
}
*/
/*
적분 구간[a,b]입력하기
시작 값 a는?3
끝 값 b는?6
적분 구간[3,6]의 등분수n은?1000
x^2-1/x의 [3, 6]구간을 1000등분했을 때 적분 근사치: 62.266
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//p69
/*#include <stdio.h>

int main() {

	double height,width,area;

	height=5;
	width=3;

	area=height*width/2;

	printf("밑변=%.6lfcm,높이=%.6lfcm인 삼각형의 면적=%.6lfcm^2", width,height,area);

	return 0;

}
밑변=3.000000cm,높이=5.000000cm인 삼각형의 면적=7.500000cm^2
*/

//p82
/*#include <stdio.h>

int main() {

	int height;
	double weight,std_weight,gap;

	setbuf(stdout,NULL);

	printf("키:");
	scanf("%d",&height);

	printf("체중:");
	scanf("%lf",&weight);

	std_weight=(height-100)*0.9;

	gap=weight-std_weight;

	printf("표준체중 %.1lf과의 차이:%+.1lfkg",std_weight,gap);

	return 0;


}
키:171
체중:54.5
표준체중 63.9과의 차이:-9.4kg
*/

//p92

/*#include <stdio.h>

int main() {

	double radian,pi,area;

	setbuf(stdout,NULL);

	printf("반지름을 입력하세요.");
	scanf("%lf",&radian);

	pi=3.14;

	area=radian*radian*pi;

	printf("반지름이 %.2lf인 원의 면적은 %.2lf입니다.",radian,area);

	return 0;
}
반지름을 입력하세요.3.5
반지름이 3.50인 원의 면적은 38.47입니다.
*/

//p107
/*#include <stdio.h>

int main() {

	int x;

	setbuf(stdout,NULL);

	printf("정수 입력:");
	scanf("%d",&x);

	printf("%d는 %s",x,(x%2==0)?"짝수입니다":"홀수입니다");

	return 0;
}
정수 입력:5
5는 홀수입니다
*/
//107
/*#include <stdio.h>

int main() {

	double height,weight,s_weight,gap;
	char name[10];

	setbuf(stdout,NULL);

	printf("키(cm)를 입력하세요:");
	scanf("%lf",&height);

	printf("몸무게(kg)를 입력하세요:");
	scanf("%lf",&weight);

	fflush(stdin);
	printf("이름을 입력하세요:");
	gets(name);

	s_weight=(height-100)*0.9;

	gap=weight-s_weight;

	printf("\n\n\"%s\"님의 표준체중은 %.1lfkg입니다.",name,s_weight);
	printf("표준체중과의 차이는 %+.1lfkg으로 당신은 %s",gap,(gap>0)?"\"비만\"입니다":"\"허약\"다");

	return 0;
}
*/
/*키(cm)를 입력하세요:175.7
몸무게(kg)를 입력하세요:65
이름을 입력하세요:홍길동


"홍길동"님의 표준체중은 68.1kg입니다.표준체중과의 차이는 -3.1kg으로 당신은 "허약"다
*/

//p111

/*#include <stdio.h>

int main() {

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하세요:");
	scanf("%d",&x);

	printf("%d은 100 이하의 자연수%s",x,(x>=1&&x<=100)?"입니다":"아닙니다");

	return 0;


}
정수를 입력하세요:-50
-50은 100 이하의 자연수아닙니다
*/

//p114

/*#include <stdio.h>

int main() {

	int x,y,a,b,big,small;


	setbuf(stdout,NULL);

	printf("두 정수 입력:");
	scanf("%d %d",&x,&y);

	if(x>y){

		big=x;
		small=y;
	}
	else{
		big=y;
		small=x;

	}

	a=big/small;
	b=big%small;

	printf(">>큰 수/작은 수=%d",a);
	printf("\n>>큰 수%%작은 수=%d",b);

	return 0;
}
두 정수 입력:48 9
>>큰 수/작은 수=5
>>큰 수%작은 수=3*/

//p114 교수님

/*#include <stdio.h>

int main() {

	int x,y,max,min,a,b;

	setbuf(stdout,NULL);

	printf("두 정수 입력:");
	scanf("%d %d",&x,&y);

	max=x>y?x:y;
	min=x>y?y:x;

	a=max/min;
	b=max%min;

	printf(">>큰 수/작은 수=%d",a);
	printf("\n>>큰 수%%작은 수=%d",b);

	return 0;
}
두 정수 입력:48 9
>>큰 수/작은 수=5
>>큰 수%작은 수=3
*/

//p124
/*#include <stdio.h>

int main(){

	int x;
	double fx;

	setbuf(stdout,NULL);

	printf("f(x)=x^3-2x^2+1/x에서\n");

	printf("x 입력");
	scanf("%d",&x);

	fx=x*x*x-2*x*x+1.0/x;

	printf("f(%d)=%.1lf",x,fx);

	return 0;
}
f(x)=x^3-2x^2+1/x에서
x 입력3
f(3)=9.3
*/

//p134
/*#include <stdio.h>

int main() {

	int x;

	setbuf(stdout,NULL);

	printf("점수를 입력하세요:");
	scanf("%d",&x);

	if(x>=90)
		printf("우수!\n");


	printf("점수:%d",x);

	return 0;
}
점수를 입력하세요:95
우수!
점수:95
*/

//피피티5장 p7
/*#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    setbuf(stdout,NULL);

    // 초 입력 받기
    printf("초를 입력하세요: ");
    scanf("%d", &totalSeconds);

    // 초를 시간, 분, 초로 변환
    hours = totalSeconds / 3600;         // 1 시간 = 3600 초
    totalSeconds %= 3600;                // 남은 초 계산
    minutes = totalSeconds / 60;         // 1 분 = 60 초
    seconds = totalSeconds % 60;         // 남은 초 계산

    // 결과 출력
    printf("시간: %d, 분: %d, 초: %d\n", hours, minutes, seconds);

    return 0;
}
초를 입력하세요: 1000000
시간: 277, 분: 46, 초: 40
*/

//p137
/*#include <stdio.h>

int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하시오:");
	scanf("%d",&x);

	printf("입력한 수 %d는(은) ",x);

	if(x%2==0) {
		printf("짝수입니다");
	}
	else{
		printf("홀수입니다");
	}

	return 0;
}
정수를 입력하시오:7
입력한 수 7는(은) 홀수입니다
*/

//p141
/*#include <stdio.h>

int main(){

	int score;
	char grade;

	setbuf(stdout,NULL);

	printf("점수를 입력하세요: ");
	scanf("%d",&score);

	if (score>=90)
		grade='A';
	else if(score>=80)
		grade='B';
	else if(score>=70)
		grade='C';
	else if(score>=60)
		grade='D';
	else
		grade='F';


	printf("학점:%c",grade);

	return 0;

}
점수를 입력하세요: 75
학점:C
*/

/*#include <stdio.h>

int main(){

	int x;

	setbuf(stdout,NULL);

	printf("정수를 입력하세요: ");
	scanf("%d",&x);

	printf("입력한 수%d는 ",x);

	if(x>0){
		if(x%2==0)
			printf("양의 짝수입니다");
		else
			printf("양의 홀수입니다");
	}
	else{
		if(x%2==0)
			printf("음의 짝수입니다");
		else
			printf("음의 홀수입니다");
	}

    return 0;
}
정수를 입력하세요: 4
입력한 수4는 양의 짝수입니다
*/

//p145

/*#include <stdio.h>

int main(){

    char name[10];
	int kor,eng,math,attend;
	double avr;

	setbuf(stdout,NULL);

	printf("학생의 이름: ");
	gets(name);

	printf("국어, 영어, 수학 점수 차례로 입력: ");
	scanf("%d %d %d",&kor,&eng,&math);

	printf("출결 점수 입력");
	scanf("%d",&attend);

	printf("\n====================");

	avr=(kor+eng+math+attend)/4.0;

	printf("\n네 개 점수의 평균: %.1lf",avr);
	printf("\n출결 점수: %d",attend);

	printf("\n====================");

	printf("\n\n[%s]학생 >> ",name);

	if(avr>=70){
		if(attend>=80)
			printf("합격!");
		else
			printf("불합격!");
	}
	else
		printf("불합격!");

	return 0;

}
학생의 이름: 홍길동
국어, 영어, 수학 점수 차례로 입력: 80 75 95
출결 점수 입력75

====================
네 개 점수의 평균: 81.3
출결 점수: 75
====================

[홍길동]학생 >> 불합격!
*/

//p147>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>실패,,,,,,,,,,,,,,,

/*#include <stdio.h>

int main(){
	int a, b, c;
			double D;

			printf("ax^2+bx+c=0의 근을 판별하는 프로그램입니다.\n다음을 입력해 주세요.\n");

			setbuf(stdout, NULL);

			printf("a는? ");
			scanf("%d", &a);

			setbuf(stdout, NULL);

			printf("b는? ");
			scanf("%d", &b);

			setbuf(stdout, NULL);

			printf("c는? ");
			scanf("%d", &c);

			printf("이차방정식 %dx^2+%dx+%d=0\n", a,b,c);
			D = (b*b)-(4*a*c) ;

			printf("판별식 D=%.0lf\n", D);

			if(D>0)
				printf("두 개의 실근을 갖습니다.");
			if(D==0)
				printf("중근을 갖습니다.");
			if(D<0)
				printf("허근을 갖습니다.");

	return 0;

}*/
/*#include <stdio.h>

int main(){

	int score;
	char grade;

	setbuf(stdout,NULL);

	printf("점수를 입력하시오:");
	scanf("%d",&score);

	if (score<0||score>100){
		printf("유효하지 않은 점수입니다.\n");
	}
		else{
			int grade = score/10;



		switch(grade){

		case 10:case 9:printf("학점 A\n");break;
		case 8:printf("학점: B\n");break;
		case 7:printf("학점: C\n");break;
		case 6:printf("학점: D\n");break;

		default:printf("학점: F\n");break;

		}
	}
	return 0;
}
*/

/*#include <stdio.h>

int main() {
    int n, max, num, maxIndex, i;

    printf("몇 개의 숫자를 비교할 것인지 입력하세요: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("적어도 하나 이상의 숫자를 비교해야 합니다.\n");
        return 1; // 프로그램 종료
    }

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &max);
    maxIndex = 1;

    for (i = 2; i <= n; i++) {
        printf("다음 숫자를 입력하세요: ");
        scanf("%d", &num);

        if (num > max) {
            max = num; // 새로운 최댓값으로 업데이트
            maxIndex = i; // 최댓값의 위치 업데이트
        }
    }

    printf("입력한 숫자 중에서 최댓값은 %d이며, %d번째 값입니다.\n", max, maxIndex);

    return 0;
}*/


