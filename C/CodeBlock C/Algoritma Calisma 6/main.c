#include <stdio.h>
#include <stdlib.h>
#define sinif 5
int main()
{
    float vize[sinif],final[sinif],ysnotu[sinif];
    int i,x;

    for (i=1;i<=5;i++)
{
    printf("%d. Ogrencinin Vize Notunu Girin= ",i);
    scanf("%f",&vize[i]);
    printf("%d. Ogrencinin Final Notunu Girin= ",i);
    scanf("%f",&final[i]);
    ysnotu[i]=vize[i]*0.4+final[i]*0.6;
}
    for (x=1;x<=5;x++)
    {
        if(ysnotu[x]>=50)
        {
            printf("%d. Ogrencinin Yil Sonu Notu= %f\n",x,ysnotu[x]);
            printf("%d. Ogrenci Dersi Gecmistir!\n\n",x);
        }
        else
        {
            printf("%d. Ogrencinin Yil Sonu Notu= %f\n",x,ysnotu[x]);
            printf("%d. Ogrenci Maalesef Dersten Kalmistir!\n\n",x);
        }
    }

    return 0;
}
