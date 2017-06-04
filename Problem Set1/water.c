#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("Pls input the number of minutes of shower: \n");
    int n = get_int();
    int bottle = 12 * n;
    printf("The bottle of water used is %i. \n", bottle);
    
}
