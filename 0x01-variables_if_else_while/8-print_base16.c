#include <stdio.h>

/**
* main - main block to be executed
* Description: printing base 10 digits
* Return: Always 0 (success)
*/

int main(void)
{
char ch;
for (ch = 0; ch <= 9; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
