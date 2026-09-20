#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float h,m;
	float g = 9.8;

	
	printf("Введите массу: ");
	scanf("%f", &m);

	printf("Введите высоту: ");
	scanf("%f", &h);

	float F = m * g;

	printf("Сила тяжести равна: %.2f Н", F);
	return 0;
}