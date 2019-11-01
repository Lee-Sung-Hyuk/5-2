#define _CRT_SECURE_NO_WARNINGS
#define pound 0.453592
#include <stdio.h>

int main()
{
	double x;
	printf("무게(kg)을 입력하시오: ");
	scanf("%lf", &x);

	printf("입력하신 무게의 파운드는: %.3lf", x / pound);

	return 0;

}