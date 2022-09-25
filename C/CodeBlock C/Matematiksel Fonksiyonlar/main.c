#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    double sayi1,sayi2,sayi3,sonuc,sonuca,sonucy;

    baslangic:
    printf("*****MATEMATIKSEL FONKSIYON ISLEMI YAPTIRMA PROGRAMINA HOS GELDINIZ*****\n\n");
    printf("1-Girilen Sayinin Karekokunu Alma\n");
    printf("2-Girilen Sayinin Istenildigi Kadar Ustunu Alma\n");
    printf("3-Girilen Sayinin Ust'e ve Asagi'ya Yuvarlama\n");
    printf("4-Girilen Sayinin Mutlak Degerini Alma\n");
    printf("5-Girilen Sayinin Logaritmasini Alma\n");
    printf("6-Girilen Derecenin Sinus Degerini Bulma\n");
    printf("7-Girilen Derecenin Cosinus Degerini Bulma\n");
    printf("Uygulamak Istediginiz Islemi Giriniz= ");
    scanf("%d",&secim);

        switch(secim)
        {
            case 1 :
                printf("\nKarekokunu Almak Istediginiz Sayiyi Giriniz= ");
                scanf("%lf",&sayi1);

                sonuc=sqrt(sayi1);
                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            case 2 :
                printf("\nTaban Sayiyi Giriniz= ");
                scanf("%lf",&sayi2);
                printf("Ust Sayiyi Giriniz= ");
                scanf("%lf",&sayi3);

                sonuc=pow(sayi2,sayi3);
                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            case 3 :
                printf("\nYuvarlamak Istediginiz Sayiyi Giriniz= ");
                scanf("%lf",&sayi1);

                sonucy=ceil(sayi1);
                sonuca=floor(sayi1);

                printf("\nSayinizin Yukariya Yuvarlanmis Sonucu= %lf\n",sonucy);
                printf("Sayinizin Asagiya Yuvarlanmis Sonucu= %lf\n\n",sonuca);
                goto baslangic;
                break;
            case 4 :
                printf("\nMutlak Degerini Almak Istediginiz Sayiyi Giriniz= ");
                scanf("%lf",&sayi1);

                sonuc=fabs(sayi1);

                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            case 5 :
                printf("\nLogaritmasini Almak Istediginiz Sayiyi Giriniz= ");
                scanf("%lf",&sayi1);

                sonuc=log10(sayi1);

                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            case 6 :
                printf("\nSinus Degerini Bulmak Istediginiz Dereceyi Girin= ");
                scanf("%lf",&sayi1);

                sonuc=sin(sayi1);

                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            case 7 :
                printf("\nCosinus Degerini Bulmak Istediginiz Dereceyi Girin= ");
                scanf("%lf",&sayi1);

                sonuc=cos(sayi1);

                printf("\nSonuc= %lf\n\n",sonuc);
                goto baslangic;
                break;
            default :
                printf("\nHatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                goto baslangic;
                break;

        }

    return 0;
}
