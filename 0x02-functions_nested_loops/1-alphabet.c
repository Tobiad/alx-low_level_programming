#include"main.h"
/* a command to print a to z followed by a new line*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
}
