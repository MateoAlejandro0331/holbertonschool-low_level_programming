#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - return the n value
 * @i: int inside the funtion
 * Return: 0
 */
int positive_or_negative(int i)
{
    if (i > 0)
    {
        printf("%d is positive\n", i);
    }
    else if (i < 0)
    {
        printf("%d is negative\n", i);
    }
    else if (i == 0)
    {
        printf("%d is zero\n", i);
    }
    return (0);
}

