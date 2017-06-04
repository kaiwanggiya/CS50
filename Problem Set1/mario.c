#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, whole;
    do
    {
        printf("Pls enter the height: \n");
        height = get_int();
    }
    while (height < 0 || height > 23);
    printf("Here is a %i layer full pyramid \n", height);
    whole = 2 * height + 2;
    for (i = 1; i <= height; i ++)
    {
        for (j = 1; j <=  whole; j ++)
        {
            if (j <= height - i || (j >= height + 3 + i && j <= whole) || (j > height && j < height + 3)) 
                printf(" ");
            else
                printf("#");
        }
        
        printf("\n");
    }
    return 0;
}
