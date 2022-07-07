#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
  int x;
  
  if (n <= 0)
      _putchar('\n');
   for (x = 0; x <= n; x++)
      _putchar('_');
    _putchar('\n');
}
