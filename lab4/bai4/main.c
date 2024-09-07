#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    int min, max, z, x, i;
    int count = 0;

    do
    {
        printf("\n**-------------------------------------------------------------**");
        printf("\n |Chao mung ban den voi menu bai thuc hanh 4 \t\t\t|");
        printf("\n | Chuc nang 1: Tinh trung binh tong \t\t\t\t|");
        printf("\n | Chuc nang 2: Tim so nguyen to \t\t\t\t|");
        printf("\n | Chuc nang 3: Tim so chinh phuong \t\t\t\t|");
        printf("\n | Chuc nang 4: Thoat chuong trinh \t\t\t\t|");
        printf("\n**-------------------------------------------------------------**");
        printf("\nChuc nang ban chon la so: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Bai 1: Tinh trung binh tong cac so tu nhien chia het cho 2\n");
            printf("Xin moi nhap min: ");
            scanf("%d", &min);
            printf("Xin moi nhap max: ");
            scanf("%d", &max);
            float tong = 0,bienDem = 0,trungBinh = 0;

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
            break;

        case 2:
            printf("Bai 2: Tim so nguyen to\n");
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
            break;
        case 3:
            printf("Bai 2: Tim so chinh phuong\n");
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
            break;
        case 4:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai!\n");

        }
    }
    while (menu !=4 );


    return 0;
}
