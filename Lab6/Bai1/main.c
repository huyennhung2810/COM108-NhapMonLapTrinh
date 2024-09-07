#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    float tong=0;
    float tb;
    int count = 0;
    for(i=0; i<n; i++)
    {
        if(mang[i]%3==0)
        {
            tong +=mang[i];
            count++;
        }
    }

    tb= tong/count;
    if(count > 0)
    {
        printf("Trung binh tong cac so chia het cho 3 trong mang la : %.2f\n", tb);
    }
    else
    {
        printf("Khong co so nao chia het cho 3 trong mang\n");
    }


    return 0;
}
