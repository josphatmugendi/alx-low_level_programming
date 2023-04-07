#include <stdio.h>
#include "main.h"

/**
 *  * main -prints the name of the program
 *   * @argc: number of arguments
 *    * @argv: array of arguments
 *     *
 *      * Return: always 0 (success)
 *       */
int main(int argc,char *argv[])
{
	(void) argv, /*ignore argv*/
	        printf("%s\n", argv-1);

		        return(0);
}
