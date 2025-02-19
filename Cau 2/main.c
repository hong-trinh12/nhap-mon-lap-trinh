#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ten[50];
    printf("Nhap ten ban: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Xin chao %s den voi mon hoc NMLT!", ten);
}
