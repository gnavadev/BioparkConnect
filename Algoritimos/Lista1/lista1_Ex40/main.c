#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int co, ca;
float hip;

void calculo()
{
    hip = sqrt((pow(co, 2)) + (pow(ca, 2)));
}
int main()
{
    while (co > 0)
    {
        co++;
        printf("oia %d ", co);
    }
}