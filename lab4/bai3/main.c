#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    int count = 0;

    printf("Nhap so x: ");
    scanf("%d", &x);

    for (i = 1; i < x; i++)
    {
        if (i * i == x)
        {
            printf("%d la so chinh phuong.\n", x);
            break;
        }
    }

    if (i >= x)
    {
        printf("%d khong phai la so chinh phuong.\n", x);
    }

    return 0;
}
