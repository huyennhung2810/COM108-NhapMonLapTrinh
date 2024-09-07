#include <stdio.h>

void Tong()
{
    int soThuNhat, soThuHai;
    int tong;
    scanf("%d%d", &soThuNhat, &soThuHai);
    tong = soThuNhat + soThuHai;
    printf("%d", tong);
}
void Hieu()
{
    int soThuNhat, soThuHai;
    int hieu;
    scanf("%d%d", &soThuNhat, &soThuHai);
    hieu = soThuNhat - soThuHai;
    printf("%d", hieu);
}
void Nhan()
{
    int soThuNhat, soThuHai;
    int nhan;
    scanf("%d%d", &soThuNhat, &soThuHai);
    nhan = soThuNhat * soThuHai;
    printf("%d", nhan);
}
void Chia ()
{
    int soThuNhat, soThuHai;
    int chia;
    scanf("%d%d", &soThuNhat, &soThuHai);
    chia = soThuNhat / soThuHai;
    printf("%d", chia);
}
