#include <stdio.h>
#define NAME_MAX 20

/**
 * main - Program to computer gross pay
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{

	char str1[NAME_MAX], str2[NAME_MAX];
	float payHour, grossPay;
	int workHours;

	printf("First Name: ");
	scanf("%s", &str1);

	printf("Last Name: ");
	scanf("%s", &str2);

	printf("Pay/h($): ");
	scanf("%f", &payHour);

	printf("Hours Worked: ");
	scanf("%d", &workHours);

	grossPay = payHour * workHours;

	printf("The Gross pay of %s %s is $%.2f", str1, str2, grossPay);

	return (0);
}
