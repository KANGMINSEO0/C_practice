#define _CRT_SECURE_NO_WARNINGS		// scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &num1);				// �Ǽ��� �Է¹޾Ƽ� ������ ����
	scanf("%lf", &num2);			// �ڷ����� double�� ���� %lf
	scanf("%Lf", &num3);			// �ڷ����� long double�� ���� %Lf

	printf("%f\n", num1);			// ������ ������ ���
	printf("%f\n", num2);
	printf("%Lf\n", num3);


	return 0;
}