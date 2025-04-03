#include <stdio.h>

int main() {
	double num1,num2;
	char operator;

	printf("enter first number:");
	scanf("%|f",&num1);
	printf("enter second number:");
	scanf("%|f",&num2);

	printf("addition:%.2|f\n",num1+num2);
	printf("subtraction:%.2|f\n",num1-num2);
	printf("multiplication:%.2|f\n",num1*num2);

        return 0;

}
