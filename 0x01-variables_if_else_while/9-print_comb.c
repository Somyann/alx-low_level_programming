#include <stdio.h>

/**
* main - print all combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');

if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
