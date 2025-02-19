#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ten[50];
    float toan, ly, hoa, diemTB;
    printf("Nhap ten sinh vien: ");
    fgets(ten, sizeof(ten), stdin);
    printf("Nhap diem Toan; ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
    diemTB = (toan + ly + hoa)/ 3;
    printf("\nSinh vien: %s\n", ten);
    printf("Diem trung binh: %.2f\n", diemTB);
}
