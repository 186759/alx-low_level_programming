#include <stdlib.h>

#include <time.h>

#include <stdio.h>
 /**

 * main - main block

 * Description: Get a random number and print the number

 * and if it is positive, negative, or zero

 * Return: 0

 */

int main(void)

{

0-positive_or_negative.c int n;



0-positive_or_negative.c srand(time(0));

0-positive_or_negative.c n = rand() - RAND_MAX / 2;

0-positive_or_negative.c if (n > 0)

0-positive_or_negative.c 0-positive_or_negative.c printf("%i is positive\n", n);

0-positive_or_negative.c else if (n < 0)

0-positive_or_negative.c 0-positive_or_negative.c printf("%i is negative\n", n);

0-positive_or_negative.c else

0-positive_or_negative.c 0-positive_or_negative.c printf("%i is zero\n", n);



0-positive_or_negative.c return (0);

}
