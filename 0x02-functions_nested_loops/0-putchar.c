#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: always 0(success)
 */

int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;

sz = sizeof(str) / sizeof(int);
// Print each character in the string using a loop
for (count = 0; count < sz; count++)
{
  _putchar(str[count]); // Call the _putchar function
}
_putchar('\n'); // Print a new line
    
return (0);
}
