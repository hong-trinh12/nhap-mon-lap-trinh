#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Nhap canh thu nhat: ");
    scanf("%d", &a);
    printf("Nhap canh thu hai: ");
    scanf("%d", &b);
    double chuvi = (a+b)*2;
    double dientich = a*b;
    printf("Chu vi hinh chu nhat laf %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat laf %.2f\n", dientich);

}
