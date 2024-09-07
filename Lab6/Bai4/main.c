#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Nhap so hang : ");
    scanf("%d", &n);
    printf("Nhap so cot : ");
    scanf("%d", &m);

    int mang[n][m];
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("Ma tran sau khi tinh binh phuong: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\n", mang[i][j] * mang[i][j]);
        }
    }

    return 0;
}
