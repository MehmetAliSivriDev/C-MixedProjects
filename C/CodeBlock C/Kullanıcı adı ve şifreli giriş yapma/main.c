#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    //Kullanici Adi=mehmetali
    //Sifre=1234

    char gercek[20]="mehmetali";
    char kullanici[20];
    char adkontrol=0;
    int sifre,i;

    baslangic:
    printf("Kullanici Adinizi Giriniz= ");
    scanf("%s",kullanici);

    adkontrol=strcmp(kullanici,gercek);

    if (adkontrol==0)
    {
        Sleep(1500);
        printf("Kullanici Adi Dogrulanmistir!\n");
        sifreb:
        printf("Sifrenizi Giriniz= ");
        scanf("%d",&sifre);

            if (sifre==1234)
            {
                Sleep(1500);
                printf("Sifreniz Dogrulanmistir!\n\n");
                printf("Sistemimize Hos Geldiniz!");
            }
            else
            {
                Sleep(1500);
                while(i<3)
                {
                i++;
                printf("Sifrenizi Yanlis Girdiniz Tekrar Giriniz!\n\n");
                goto sifreb;
                }
                printf("Sifrenizi 3 Kereden Fazla Yanlis Girdiniz Sistem Kapatiliyor!");
                return 0;
            }
    }
    else
    {
        Sleep(1500);
        printf("Kullanici Adini Yanlis Girdiniz Lutfen Tekrar Giriniz!\n\n");
        goto baslangic;

    }



    return 0;
}
