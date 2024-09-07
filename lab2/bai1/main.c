#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    float tong, hieu;

    printf("Nhap a = ");
    scanf("%f", &a);

    printf("Nhap b = ");
    scanf("%f", &b);

    tong = a + b;
    hieu = a - b;

    printf("\nTong = %.2f", tong);
    printf("\nHieu = %.2f", hieu);

    return 0;
}
