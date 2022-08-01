#include <stdio.h>

int y, g = 0, c = 0, x = 0, z = 0, e = 0, n = 0, dia = 0, d = 0;

int main()
{
    printf("Informe o ano desejado: ");
    scanf("%d", &y);

    g = (y % 19) + 1;
    c = (y / 100) + 1;
    x = ((3 * c) / 4) - 12;
    z = ((8 * c + 5) / 25) - 5;
    e = (11 * g + 20 + z - x) % 30;

    if ((e = 25 && g > 11) || (e = 24))
        e = e + 1;

    n = 44 - e;

    if (n < 21)
        n = n + 30;

    d = ((5 * y) / 4) - (x + 10);
    n = (n + 7) - ((d + n) % 7);

    if (n > 31)
    {
        dia = (n - 31);
        printf("%d de abril de %d \n", dia, y);
    }
    else
    {
        dia = n;
        printf("%d de marco de %d \n", dia, y);
    }

    return 0;
}