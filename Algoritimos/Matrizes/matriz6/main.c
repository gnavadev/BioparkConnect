#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int lin = 0; lin < 8; lin++)
    {

        for (int col = 0; col < 8; col++)
        {

            if (lin == 7 || lin == 0)
                printf("*");
            if (lin == col)
                printf("*");
        }

        printf("\n");
    }
    return 0;
}