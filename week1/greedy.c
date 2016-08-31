#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f;
    do
    {
        printf("Please input, how much change is owed (beetwen 0 and 100): \n");
        f = GetFloat();
    }
    while (f < 0 || f > 100);

    int d50 = (f / 50);
    int d20 = ((f - d50 * 50) / 20);
    int d10 = ((f - d50 * 50 - d20 * 20) / 10);
    int d5 = ((f - d50 * 50 - d20 * 20 - d10 * 10) / 5);
    int d1 = ((f - d50 * 50 - d20 * 20 - d10 * 10 - d5 * 5) / 1);
    
    int c25 = (f * 100 - d50 * 5000 - d20 * 2000 - d10 * 1000 - d5 * 500 - d1 * 100) / 25;
    int c10 = (f * 100 - d50 * 5000 - d20 * 2000 - d10 * 1000 - d5 * 500 - d1 * 100 - c25 * 25) / 10;
    int c5 = (f * 100 - d50 * 5000 - d20 * 2000 - d10 * 1000 - d5 * 500 - d1 * 100 - c25 * 25 - c10 * 10) / 5;
    int c1 = (f * 100 - d50 * 5000 - d20 * 2000 - d10 * 1000 - d5 * 500 - d1 * 100 - c25 * 25 - c10 * 10 - c5 * 5) / 1;
    
    printf("To pay change %.2f$ you should give:\n", f); 
        if (d50 > 0)
        {
            printf("50 dollars banknote:   %d\n", d50);
        }

        if (d20 > 0)
        {
            printf("20 dollars banknote:   %d\n", d20);
        }

        if (d10 > 0)
        {
            printf("10 dollars banknote:   %d\n", d10);
        }

        if (d5 > 0)
        {
            printf("5 dollars banknote:   %d\n", d5);
        }

        if (d1 > 0)
        {
            printf("1 dollar banknote:   %d\n", d1);
        }

        if (c25 > 0)
        {
            printf("25c coin:   %d\n", c25);
        }
    
        if (c10 > 0)
        {
            printf("10c coin:   %d\n", c10);
        }
    
        if (c5 > 0)
        {
            printf(" 5c coin:   %d\n", c5);
        }

        if (c1 > 0)
        {
            printf(" 1c coin:   %d\n", c1);
        }
    
}    
