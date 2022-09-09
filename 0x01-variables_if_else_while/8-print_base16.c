#include <stdio.h>
/**
* main -print if the number is postive, zero, or negative
* Return: 0
*
*/
int main(void)
{
int nums;
int nums1;
for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
for (nums1 = 'a'; nums1 <= 'f'; nums1++)
{
putchar(nums1);
}
putchar('\n');
return (0);
}
