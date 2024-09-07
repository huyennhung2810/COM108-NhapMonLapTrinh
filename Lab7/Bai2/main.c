#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char userSys[]= "admin";
    char passSys[] = "12345";
    char user[100];
    char pass[100];

    printf("Nhap username: ");

    gets(user);
    printf("Nhap password: ");
    gets(pass);

    if(strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Dang nhap that bai!\n");
    }

    return 0;
}
