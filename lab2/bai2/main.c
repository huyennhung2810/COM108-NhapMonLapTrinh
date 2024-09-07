#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    float chu_vi, dien_tich;

    printf("Nhap chieu dai = ");
    scanf("%f", &a);

    printf("Nhap chieu rong = ");
    scanf("%f", &b);

    chu_vi = 2 * (a + b);
    dien_tich = a * b;

    printf("\nchu vi = %.2f" , chu_vi);
    printf("\ndien tich = %.2f", dien_tich);


    return 0;
}
