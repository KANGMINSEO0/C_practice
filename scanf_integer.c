#define _CRT_SECURE_NO_WARNINGS		// scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
	int num1;

	printf("������ �Է��ϼ���: ");
	//     �� ù ��° �μ�
	scanf("%d", &num1);				// ǥ���Է��� �޾Ƽ� ������ ����
	//           �� �� ��° �μ�
	printf("%d\n", num1);			// ������ ������ ���

	return 0;
}