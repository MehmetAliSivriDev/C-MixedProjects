#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,hacimi,alan,ucevre,kalan;

    baslangic:
    printf("1-Hacim Hesaplama\n");
    printf("2-Yuzey Alani Hesaplama\n");
    printf("3-Cevre Hesaplama\n");
    printf("4-100 Metrekup Su Tasar Mi Tasmaz Mi Hesaplama\n");
    printf("Uygulamak Istediginiz Islemi Girin=");
    scanf("%d",&secim);

    switch (secim){

        case 1 :
                goto hacim;
                break;
        case 2 :
                yalan(alan);
                goto baslangic;
                break;
        case 3 :
                cevre(ucevre);
                goto baslangic;
                break;
        case 4 :
                tasma(hacimi,kalan);
                goto baslangic;
                break;
        default :
            printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n");
            goto baslangic;
            break;
    }
        hacim :
        {
            hacimi=9*1.7*10;
            printf("Hacimi= %d\n",hacimi);
            goto baslangic;
        }

    return 0;
}

void yalan (int alan){
    alan=(9*1.7*2)+(6*10*3);
    printf("Yuzey Alani= %d\n",alan);
}

int cevre (int ucevre){
    ucevre=18+18+30;
    printf("Cevresi= %d\n",ucevre);
    return ucevre;
}

 int tasma (int hacimi, int kalan){
    hacimi=9*1.7*10;
    kalan=hacimi-100;
    if(hacimi<=100){
        printf("Su Tasmaz\n");
    }
    else
    {
        printf("Su %d Metrekup Tasar\n",kalan);
    }
    return 0;
 }
