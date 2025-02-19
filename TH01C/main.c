#include <stdio.h>
#include <stdlib.h>
#define CNAME "HCMC University"

void main()
{
    #undef CNAME
    #define CNAME "HCMC University"
    const int Y = 60;
    printf("%s Is Over %d Years Old \n", CNAME, Y);
}
