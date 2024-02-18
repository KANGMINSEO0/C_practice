#define _CRT_SECURE_NO_WARNINGS		// scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
	int num1;

	printf("정수를 입력하세요: ");
	//     ↓ 첫 번째 인수
	scanf("%d", &num1);				// 표준입력을 받아서 변수에 저장
	//           ↑ 두 번째 인수
	printf("%d\n", num1);			// 변수의 내용을 출력

	return 0;
}