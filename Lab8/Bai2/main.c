#include <stdio.h>
#include <stdlib.h>

struct SinhVien
{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
} mangSV[50];

int main()
{
    int i, j, n;
    printf("Nhap so sinh vien moi them: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Nhap thong tin cho sinh vien thu %d:\n ",i + 1);
        printf("MSSV: ");
        scanf("%s", mangSV[i].mssv);
        printf("Ten SV: ");
        scanf("%s", mangSV[i].tenSV);
        printf("Nganh hoc: ");
        scanf("%s", mangSV[i].nganhHoc);
        printf("Diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (mangSV[j].diemTB > mangSV[j + 1].diemTB)
            {
                struct SinhVien svTemp = mangSV[j];
                mangSV[j] = mangSV[j + 1];
                mangSV[j + 1] = svTemp;
            }
        }
    }

    printf("Thong tin cua tat ca sinh vien: \n");
    for(i=0; i<n; i++)
    {
        printf("Sinh vien thu %d:\n",i+1);
        printf("MSSV: %s\n", mangSV[i].mssv);
        printf("Ten SV: %s\n", mangSV[i].tenSV);
        printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
        printf("Diem trung binh: %.2f\n", mangSV[i].diemTB);
    }


    return 0;
}
