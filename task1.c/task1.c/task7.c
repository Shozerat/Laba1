#include "func.h"

int main() {

	printf("x = ");
	fun2();
	printf("f(x) = %f \n", f);

	printf("x = ");
	fun2();
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}


void fun2(void) {
	scanf("%f", &x);
	f = cos(x) + sin(x)*cos(x) - sin(x);
}

