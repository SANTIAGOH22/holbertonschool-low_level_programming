#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-function
* description - The last digit
* Return:(0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
printf("las digit of % is %d and is greater than 5\n", n, num);
else if (num == 0)
printf("last digit of % is %D and is 0\n", n, num);
else (n < 6 && num != 0)
printf("last digit of %d is %d and is less than 6 and not 0\n", n, num);
return (0);
}
