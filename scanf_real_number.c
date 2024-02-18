#define _CRT_SECURE_NO_WARNINGS		// scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
	float num1;
	double num2;
	long double num3;

	printf("실수를 입력하세요: ");
	scanf("%f", &num1);				// 실수를 입력받아서 변수에 저장
	scanf("%lf", &num2);			// 자료형이 double일 때는 %lf
	scanf("%Lf", &num3);			// 자료형이 long double일 때는 %Lf

	printf("%f\n", num1);			// 변수의 내용을 출력
	printf("%f\n", num2);
	printf("%Lf\n", num3);


	return 0;
}