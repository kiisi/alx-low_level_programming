#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Result: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n == 0)
{
printf("is zero\n");
}
else if(n < 0)
{
printf("is negative\n");
}
else
{
printf("is positive\n");
}
return (0);
}
