#include <stdio.h>
#include <stdlib.h>
#define maksimum(s1,s2) (s1>s2) ? s1 : s2

int main()
{
    float s1,s2,s3;
    int i;


    printf("1. Sayiyi Giriniz= ");
    scanf("%f",&s1);
    printf("2. Sayiyi Giriniz= ");
    scanf("%f",&s2);

    printf("\nMaksimum Olan Sayi= %.2f\n\n",maksimum(s1,s2));

    return 0;
}
