#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Geliþmiþ atm projesi bu projede iki tane kullanýcý hesabý olucak
    kullanýcý hesabýna giriþ yapýp istediði iþlemi gerçekleþtirecek.
    Bu projede ekstra olarak kullanýcý adý da eklenmiþtir.

    1. hesap (mehmet)                     2. hesap (zeyni)

    þifre=123456                          þifre=1832002
    bakiye=1500t                         bakiye=850tl
    -------------------------------------------------------------------*/

    int sifre,bakiyem,bakiyez,islem,yatirma,cekme;

    bakiyem=1500;
    bakiyez=850;

    baslangic:
    printf("******BANKA SISTEMINE HOSGELDINIZ******\n");
    printf("Sifre= ");
    scanf("%d",&sifre);

        if (sifre==123456){

            startm :
            printf("Mehmet Bey Sistemimize Hos Geldiniz!\n");
            printf("Mevcut Bakiyeniz= %d\n",bakiyem);
            printf("1-Para Cekme\n");
            printf("2-Para Yatirma\n");
            printf("Lutfen Uygulamak Istediginiz Islemi Seciniz= ");
            scanf("%d",&islem);

            switch (islem){
                case 1 :
                    printf("Cekmek Istediginiz Miktari Giriniz= ");
                    scanf("%d",&cekme);
                    printf("Para Cekme Islemi Basari ile Gerceklesmistir.\n");
                    printf("Guncel Bakiyeniz= %d\n",bakiyem-cekme);
                    printf("Lutfen Kartinizi ve Paranizi Almayi Unutmayin!!");
                    break;
                case 2 :
                    printf("Yatirmak Istediginiz Miktari Giriniz= ");
                    scanf("%d",&yatirma);
                    printf("Para Yatirma Islemi Basari ile Gerceklesmistir.\n");
                    printf("Guncel Bakiyeniz= %d\n",bakiyem+yatirma);
                    printf("Lutfen Kartinizi ve Paranizi Almayi Unutmayin!!");
                    break;
                default :
                    printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyiniz!");
                    goto startm;
            }

        }
         if (sifre==18032002){
            startz :
            printf("Zeyni Hanim Sistemimize Hos Geldiniz!\n");
            printf("Mevcut Bakiyeniz= %d\n",bakiyez);
            printf("1-Para Cekme\n");
            printf("2-Para Yatirma\n");
            printf("Lutfen Uygulamak Istediginiz Islemi Seciniz= ");
            scanf("%d",&islem);

            switch (islem){
                case 1 :
                    printf("Cekmek Istediginiz Miktari Giriniz= ");
                    scanf("%d",&cekme);
                    printf("Para Cekme Islemi Basari ile Gerceklesmistir.\n");
                    printf("Guncel Bakiyeniz= %d\n",bakiyez-cekme);
                    printf("Lutfen Kartinizi ve Paranizi Almayi Unutmayin!!");
                    break;
                case 2 :
                    printf("Yatirmak Istediginiz Miktari Giriniz= ");
                    scanf("%d",&yatirma);
                    printf("Para Yatirma Islemi Basari ile Gerceklesmistir.\n");
                    printf("Guncel Bakiyeniz= %d\n",bakiyez+yatirma);
                    printf("Lutfen Kartinizi ve Paranizi Almayi Unutmayin!!");
                    break;
                default :
                    printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyiniz!");
                    goto startz;

                }
            }
            else
            {
                printf("Hatali Sifre Girdiniz Lutfen Tekrar Girin!\n");
                goto baslangic;
                }







    return 0;
}
