#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int lin = 0; lin < 8; lin++)
    {

        for (int col = 0; col < 8; col++)
        {
            printf("*");

            if (col < lin)
            {
                printf("\b ");
            }
        }

        printf("\n");
    }
    return 0;
}