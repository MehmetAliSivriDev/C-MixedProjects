#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,s1,s2;
    float sayi1,sayi2;
    baslangic:
    printf("1-Toplam\n");
    printf("2-Cikarma\n");
    printf("3-Carpma\n");
    printf("4-Bolme\n");
    printf("Uygulamak Istediginiz Islemi Seciniz");
    scanf("%d",&secim);

    switch (secim){
    case 1 :
        toplama(sayi1,sayi2);
        goto baslangic;
        break;
    case 2 :
        goto cikarma;
        break;
    case 3 :
        carpma(sayi1,sayi2);
        goto baslangic;
        break;
    case 4 :
        bolme(sayi1,sayi2);
        goto baslangic;
        break;
    default :
        printf("Hatali Islem Girdiniz Lutfen Tekrar Deneyin!\n\n");
        goto baslangic;
        break;
    }
    cikarma :
        {
        printf("Birinci Sayiyi Giriniz= ");
        scanf("%f",&sayi1);
        printf("Ikinci Sayiyi Giriniz= ");
        scanf("%f",&sayi2);
        printf("Sonuc= %f",sayi1-sayi2);
        goto baslangic;
        }

    return 0;
}

void toplama (float sayi1, float sayi2){
        printf("Birinci Sayiyi Giriniz= ");
        scanf("%f",&sayi1);
        printf("Ikinci Sayiyi Giriniz= ");
        scanf("%f",&sayi2);
        printf("Sonuc= %f",sayi1+sayi2);

}

void bolme (float sayi1, float sayi2){
        printf("Birinci Sayiyi Giriniz= ");
        scanf("%f",&sayi1);
        printf("Ikinci Sayiyi Giriniz= ");
        scanf("%f",&sayi2);
        printf("Sonuc= %f",sayi1/sayi2);
}

int carpma (int s1, int s2){
        printf("Birinci Sayiyi Giriniz= ");
        scanf("%d",&s1);
        printf("Ikinci Sayiyi Giriniz= ");
        scanf("%d",&s2);
        printf("Sonuc= %d",s1*s2);

        return s1*s2;
}
