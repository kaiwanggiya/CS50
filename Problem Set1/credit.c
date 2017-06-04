/********************************************************
*   This is a simple C program that allows you to       *
*   determine whether a given credit card number        *
*   is a Visa, American Express, or MasterCard.         *
*                                                       *
*   Kai Wanggiya                                        *
*                                                       *
*********************************************************/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long number, xadd, x2; 
    int addsum, x2prod, sum;
    do
    {
        printf("Pls input your credit card number: \n");
        number = get_long_long();
    }
    while (number < 0);
    for (xadd = number, addsum = 0; xadd > 0; xadd /= 100 )
        addsum += xadd % 10;
    
    for (x2 = number / 10, x2prod = 0; x2 > 0; x2 /=100)
    {
        if (2 * (x2 % 10) > 9)
        {
            x2prod += (2 * (x2 % 10)) / 10;
            x2prod += (2 * (x2 % 10)) % 10;
        }
        else
            x2prod += 2 * (x2 % 10);
    }

    sum = addsum + x2prod;

    if ( sum % 10 == 0 )
    {   
        if ( (number >= 340000000000000 && number < 350000000000000) || (number >= 370000000000000 && number < 380000000000000) )
            printf("AMERICAN EXPRESS\n");
        else if ( number >= 5100000000000000 && number < 5600000000000000 )
            printf("MASTERCARD\n");
        else if ( (number >= 4000000000000 && number < 5000000000000) || (number >= 4000000000000000 && number < 5000000000000000) )
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}
