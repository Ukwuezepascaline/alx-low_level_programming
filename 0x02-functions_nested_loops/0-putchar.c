#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * main - Prints "Holberton" followed by a new line.
 *
 * Return: Always 0.
=======
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
>>>>>>> d686e5c5567f1b43a8cdaa02dd33ea0e10906645
 */
=======
* main - Print the word "_putchar"
*
* Return: Always 0
*/

>>>>>>> a70637e6365943ef956413de40cb91937c628740
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');

	return (0);
}
