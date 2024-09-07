#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float chu_vi, dien_tich;

    printf("Nhap ban kinh = ");
    scanf("%f", &r);

    chu_vi = 2 * r * 3.14;
    dien_tich = r * r * 3.14;

    printf("\nchu vi = %.2f", chu_vi);
    printf("\ndien tich = %.2f", dien_tich);

    return 0;
}
