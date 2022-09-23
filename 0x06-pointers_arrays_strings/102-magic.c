#include <stdio.h>

int main(void)
{
	/**
	 * main - Entry point
	 * a is not allowed
	 * p variable should not be modified
	 * , is not allowed
	 * code should be written at line 19 before ;
	 * Do not remove anything not even comments
	 */
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
p[5] = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
