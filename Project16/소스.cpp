#define _CRT_SECURE_NO_WARNINGS
#define pound 0.453592
#include <stdio.h>

int main()
{
	double x;
	printf("����(kg)�� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�Է��Ͻ� ������ �Ŀ���: %.3lf", x / pound);

	return 0;

}