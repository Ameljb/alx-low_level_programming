#include <stdio.h>

/**
 *main - Entry point
 *Description : using sizeof to print the size of various type .
 * RETURN: always 0 (success)
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char :%lu byte(s)\n", (sizeof(a));
printf("size of int :%lu byte(s)\n", (sizeof(b);
printf("size of  long int :%lu byte(s)\n", (sizeof(c));
printf("size of long  long int :%lu byte(s)\n", (sizeof(d));
printf("size of float:%lu byte(s)\n", (sizeof(f));
return (0);
}
