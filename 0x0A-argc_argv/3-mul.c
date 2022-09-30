#include <stdio.h>
#include "main.h"

/**
 * main - prints the multiplication of two arguments
 * @argc: command line argument count
 * @argv: command line argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if(argc > 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int multiply = num1 * num2;

		printf("%d\n", multiply);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	
}
