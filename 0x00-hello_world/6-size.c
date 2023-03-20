#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        puts("Size of a char: %lu bytes(s)", Sizeof(char));
	puts("Size of a int:  %lu bytes(s)", Sizeof(int));
	puts("Size of a long int:  %lu bytes(s)", Sizeof(long int));
	puts("Size of a long long int:  %lu bytes(s)", Sizeof(long long int));
        puts("Size of a flot:  %lu bytes(s)", Sizeof(float));
        return (0);
}
