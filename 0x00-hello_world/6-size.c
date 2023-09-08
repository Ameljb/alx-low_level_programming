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
printf("size of char :%u byte(s)\n", (sizeof(a));
printf("size of int :%u byte(s)\n", (sizeof(b);
printf("size of  long int :%u byte(s)\n", (sizeof(c));
printf("size of long  long int :%u byte(s)\n", (sizeof(d));
printf("size of float:%u byte(s)\n", (sizeof(f));
return (0);
}
