#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that prints the name of the source file
 * it was compiled from and demonstrates the usage of macros defined in main.h.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    printf("Compiled from file: %s\n", __FILE__);

    int a = SIZE;
    double b = PI;
    int c = -5;
    int d = 10;
    int absoluteValue = ABS(c);
    int sumResult = SUM(c, d);

    printf("SIZE: %d\n", a);
    printf("PI: %lf\n", b);
    printf("Absolute Value of %d is %d\n", c, absoluteValue);
    printf("Sum of %d and %d is %d\n", c, d, sumResult);

    return (0);
}
