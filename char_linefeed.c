#include <stdio.h>

int main()
{
	char c1 = 'a';			// ���� a �Ҵ�
	char c2 = 'b';			// ���� b �Ҵ�
	char lineFeed = '\n';	// ���� ���� \n �Ҵ�

	// ���� ���ڵ� %c�� ����� �� ����
	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);

	return 0;
}