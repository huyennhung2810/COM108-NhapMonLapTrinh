#include <stdio.h>
#include <stdlib.h>

int timSoLonNhat(so1, so2, so3)
{
    int max = so1;
    if (so2 > max)
    {
        max = so2;
    }
    if (so3 > max)
    {
        max = so3;
    }
    return max;
}

int main()
{
    int so1, so2, so3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);

    int soMax = timSoLonNhat(so1, so2, so3);
    printf("So lon nhat trong 3 so la: %d\n", soMax);

    return 0;
}
