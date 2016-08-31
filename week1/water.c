#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    printf("Please inform the lenghts of your shower in minutes: ");
    float m = GetFloat();
    
    if (m > 0)
    {
        float b = m * 1.5 * 128 / 16;
    
        printf("Taking shower of %.1f minutes is using %.1f water bottles of 16 ounces (0.473 l) size.\n", m, b);
    }
    else
    {
        printf("You picked a negative number!\n");
    }
}
