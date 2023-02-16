#include <stdio.h>


/**
 *main - main entry point for the program
 *void - no parameters
 *Description - entrypoint of our application
 *Return: int returned as 0
 */

int main(void)

{
	int sizeChar, sizeInt, sizeLongInt, sizeLongLongInt, sizeFloat;



	sizeChar = sizeof(char);
	sizeInt = sizeof(int);
	sizeLongInt = sizeof(long int);
	sizeLongLongInt = sizeof(long long int);
	sizeFloat = sizeof(float);



	printf("Size of a char: %d byte(s)\n", sizeChar);
	printf("Size of an int: %d byte(s)\n", sizeInt);
	printf("Size of a long int: %d byte(s)\n", sizeLongInt);
	printf("Size of a long long int: %d byte(s)\n", sizeLongLongInt);
	printf("Size of a float: %d byte(s)\n", sizeFloat);



	return (0);
}
