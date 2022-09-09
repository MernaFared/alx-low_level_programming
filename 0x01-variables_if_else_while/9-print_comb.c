#include <stdio.h>
/**
* main -printing numbers from 0-9 with commas and space between them
* Return: 0
*
*/
int main(void)
{
int nums;
for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
if (nums == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
