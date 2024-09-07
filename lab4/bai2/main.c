#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    int count = 0;
    int i;

    printf("Nhap so x: ");
    scanf("%d", &x);

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("%d la so nguyen to.\n", x);
    }
    else
    {
        printf("%d khong phai la so nguyen to.\n", x);
    }

    return 0;
}
