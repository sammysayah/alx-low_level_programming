#include<stdio.h>
/**
 * main- Aprogram that prints the size of data types
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int : %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeod(d));
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
