#include <stdio.h>

int main(void)
{
	char name[] = "홍길동",
		int	age = 17,
		double tall = 190.0;
		char type[] = "AB";
	int	pro = 0;
	
	age = age + 10;
	tall = tall - 0.5;

	printf("10년후의 프로필\n");
	printf("이름: %s\n", name);
	printf("나이:%d\n", age);
	printf("키: %f\n", tall);
	printf("혈액형: %s\n", type);

	return 0;
}

