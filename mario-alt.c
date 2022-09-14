#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //Get user input
        n  = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    //For each row
    for (int i = 0; i < n ; i++)
    {
        //For spaces
        
        for(int j = 0; j < n -(i + 1); j++)
        {
            printf(" ");
        }
        //For symbols

        for(int k = 0; k < (i + 1); k++)
        {
            printf("#");
        }
        printf("\n");

    }


}