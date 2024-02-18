#include <stdio.h>

int main()
{
	char c1 = 'a';			// 문자 a 할당
	char c2 = 'b';			// 문자 b 할당
	char lineFeed = '\n';	// 제어 문자 \n 할당

	// 제어 문자도 %c로 출력할 수 있음
	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);

	return 0;
}