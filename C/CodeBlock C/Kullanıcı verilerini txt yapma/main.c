#include <stdio.h>
#include <stdlib.h>

struct kullaniciveri
{
    char kullaniciadi[20];
    int sifre;

};struct kullaniciveri kullanici[3];



int main()
{
    int i;

    FILE *giris;

    giris=fopen("C:\\Users\\sivri\\Desktop\\Kullanici Hesaplari.txt","w");

    for (i=0;i<3;i++)
    {
        printf("Kullanici Adi Giriniz= ");
        scanf("%s",&kullanici[i].kullaniciadi);
        printf("Sifrenizi Giriniz= ");
        scanf("%d",&kullanici[i].sifre);
    }

    for (i=0;i<3;i++)
    {
        fprintf(giris,"%d Kullanicinin Adi= %s\n%dKullanicinin Sifresi= %d\n",i+1,kullanici[i].kullaniciadi,i+1,kullanici[i].sifre);

    }


    return 0;
}
