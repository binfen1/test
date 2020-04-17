#include<stdio.h>
#include <math.h>


typedef struct kes
{
    int years;
    float kes;
    float aes;
}cn;

void printdata(cn *a)
{
    printf("中国%d年后的",a->years);
    printf("经济增长率是现在的%f倍",a->aes);
}

int main()
{
    cn a;
    a.kes = 0.07;
    a.years = 10;
    a.aes = pow((1+a.kes),a.years);
    printdata(&a);


   return 0;


}

