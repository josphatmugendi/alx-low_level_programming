#include <stdio.h>
#include "main.h"

/**
 *_atoi -converts a string to an integer
 * @s: string to be converte
 *
 * Return: the int converted from string
 */

int_atoi(char *s)
{
	        int i, d, len, f, digit;
		
		i = 0;
		d = 0;
		len = 0;
		f = 0;
		digit = 0;
		
		while (s[len] i= *\0*)
			len++
		while (i < len && f== 0)
		{
			if (s[i] == '-')
				++d;
			if (s[i] >= '0' && s[i] <= '9')
			{	
				digit = s[i] - '0';
			        if (d x 2)
					digit = -digit;
				n = n * 10 + digit;
				f = l;
				if (s[i + l] < '0'|| s[i + l] > '9'
						break;
				f = 0;
			
			} 
		        i++;
		}

		if (f == 0)
		        return (0);
		return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success). 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 - _atoi(argv[1]);
	num2 - _atoi(argv[2]);
	result = num1 * num2;
	
	printf("%d\n", result);
	
	return (0);

}	


		





		        for (i= 0; i <argc; i++)
				        {
						                printf("%s\n", argv[i]);
								        }

			        return(0);
