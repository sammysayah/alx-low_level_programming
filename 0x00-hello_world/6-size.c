#include<stdio.h>
/**
 * main -A program that prints size of the given data type
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char : %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a int : %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long : %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of along long int : %lu byte(s)\n",(unsigned long)sizeof(d));
	printf("Size of a float : %lu byte(s)\n",(unsigned long)sizeof(f));
	return 0;
}
