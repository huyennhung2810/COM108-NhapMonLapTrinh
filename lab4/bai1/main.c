#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, max;
    int i = min ;
    float tong = 0,bienDem = 0,trungBinh = 0;

    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);

    while (i <= max)
    {
        if(i % 2 == 0)
        {
            tong += i;
            bienDem++;
        }
        i++;
    }
    if (bienDem != 0)
    {
        trungBinh = tong / bienDem;
        printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
    }
    else
    {
        printf("Khong co so tu nhien nao chia het cho 2 trong doan [%d, %d]\n", min, max);
    }

    return 0;
}
