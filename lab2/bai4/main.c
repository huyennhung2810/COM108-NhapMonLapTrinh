#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diem_toan, diem_ly, diem_hoa;
    int he_so_toan = 3, he_so_ly = 2, he_so_hoa = 1;

    printf("Nhap diem toan = ");
    scanf("%f", &diem_toan);

    printf("Nhap diem ly = ");
    scanf("%f", &diem_ly);

    printf("Nhap diem hoa = ");
    scanf("%f", &diem_hoa);

    float tong_diem = (diem_toan * he_so_toan) + (diem_ly * he_so_ly) + (diem_hoa * he_so_hoa);

    int tong_he_so = he_so_toan + he_so_ly + he_so_hoa;

    float diem_trung_binh = tong_diem / tong_he_so;

    printf("\nDiem trung binh la: %.2f\n", diem_trung_binh);
    return 0;\
}
