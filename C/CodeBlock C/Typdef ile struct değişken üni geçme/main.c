#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct hesaplama
{
    float finali;
    float ortalama;

}Hesaplama;

int main()
{
    //Ogrencinin Dersten Gecebilmesi icin final notu 50den yuksek ve ortalamasida 50den yukari olmalidir.

    Hesaplama ogrenci1,ogrenci2;

    int tuslama,i;

    baslangic :

    printf("******DERS GECME KALMA HESAPLAMASI PROGRAMI******\n\n");

    printf("1. Ogrencinin Final Notunu Giriniz= ");
    scanf("%f",&ogrenci1.finali);

    printf("1. Ogrencinin Ortalama Notunu Giriniz= ");
    scanf("%f",&ogrenci1.ortalama);

    printf("2. Ogrencinin Final Notunu Giriniz= ");
    scanf("%f",&ogrenci2.finali);

    printf("2. Ogrencinin Ortalama Notunu Giriniz= ");
    scanf("%f",&ogrenci2.ortalama);



    printf("\n\n");


    if (ogrenci1.ortalama >= 50 && ogrenci1.finali >= 50)
    {
        printf("1.Ogrenci Dersten Gecmistir!!\n");
    }
    else
    {
        printf("1.Ogrenci Dersten Kalmistir!!\n");
    }

        printf("\n\n");


    if (ogrenci2.ortalama >= 50 && ogrenci2.finali >= 50)
    {
        printf("2.Ogrenci Dersten Gecmistir!!\n");
        goto tekrar;
    }
    else
    {
        printf("2.Ogrenci Dersten Kalmistir!!\n\n");
        goto tekrar;
    }


    tekrar :

        printf("Tekrar Hesaplama Yapmak Icin 1'i Tuslayiniz= ");
        scanf("%d",&tuslama);

        if (tuslama == 1)
        {
            goto baslangic;
        }
        else
        {
            printf("Hatali Tuslama Yaptiniz Tekrar Deneyiniz!\n\n");
            goto tekrar;
        }

    return 0;
}
