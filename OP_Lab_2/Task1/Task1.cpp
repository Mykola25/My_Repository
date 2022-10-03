# include <stdio.h>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("1\nа) 7E-7\n");
	printf("б) 18E+7\n");
	printf("в) 187E-7\n");
	printf("г) 5E-18\n");
	printf("д) 1E-11\n");
	printf("е) 1.4E+18\n");
	printf("1.1\nа) 100000\n");
	printf("б) 0.00000000000000000187\n");
	printf("в) 17000\n");
	printf("г) 0.0000000014\n");
	printf("д) 110000\n");
	printf("е) 0.00000000000003\n");
	printf("1.2\nа) 15-E6 (Неправильний запис)\n");
	printf("б) 0.1E-8(Правильно)\n");
	printf("в) cos3 (Неправильний запис)\n");
	printf("г) E-5(Правильно)\n");
	printf("д) 1.3E+39.1 (Неправильний запис)\n");
	printf("е) +E-12 (Неправильний запис)\n");
	printf("ж) 7E (Неправильний запис)\n");
	printf("з) E+9(Правильно)\n");
	printf("і) 123E0 (Неправильний запис)\n");
	return 0;
}
