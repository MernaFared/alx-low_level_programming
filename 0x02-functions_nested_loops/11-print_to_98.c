#include "main.h"


#include <stdio.h>
/**
* main
*
*/
void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else
{
printf("%d\n", n);
}
}
