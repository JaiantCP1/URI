#include <stdio.h>

int main() {
	char name;
	double salary,sales;
	
	scanf("%s", &name);
	scanf("%lf%lf", &salary, &sales);
	
	printf("TOTAL = R$ %.2f\n", (salary + sales * 0.15));
	return 0;
}
