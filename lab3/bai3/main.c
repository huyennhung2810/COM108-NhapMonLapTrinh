#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int so_kwh;
    float tien_dien;

    printf("Nhap vao so dien tieu thu hang thang: ");
    scanf("%d", &so_kwh);

    if (so_kwh <= 50) {
        tien_dien = so_kwh * 1678;
    } else if (so_kwh <= 100) {
        tien_dien = 50 * 1678 + (so_kwh - 50) * 1734;
    } else if (so_kwh <= 200) {
        tien_dien = 50 * 1678 + 50 * 1734 + (so_kwh - 100) * 2014;
    } else if (so_kwh <= 300) {
        tien_dien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (so_kwh - 200) * 2536;
    } else if (so_kwh <= 400) {
        tien_dien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (so_kwh - 300) * 2834;
    } else {
        tien_dien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (so_kwh - 400) * 2927;
    }

    printf("So tien can phai dong la: %.2f dong\n", tien_dien);


    return 0;
}
