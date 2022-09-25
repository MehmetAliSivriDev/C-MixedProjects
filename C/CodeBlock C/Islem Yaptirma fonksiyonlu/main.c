#include <stdio.h>
#include <stdlib.h>

void toplama (int sayi1, int sayi2){

            printf("Birinci Sayiyi Giriniz= ");
            scanf("%d",&sayi1);
            printf("Ikinci Sayiyi Giriniz= ");
            scanf("%d",&sayi2);
            printf("Toplama Isleminin Sonucu= %d\n\n",sayi1+sayi2);
}

int carpma (int sayi1, int sayi2){

            printf("Birinci Sayiyi Giriniz= ");
            scanf("%d",&sayi1);
            printf("Ikinci Sayiyi Giriniz= ");
            scanf("%d",&sayi2);
            printf("Carpma Isleminin Sonucu= %d\n\n",sayi1*sayi2);
    return sayi1*sayi2;
}

char bolme (float s1, float s2){

            printf("Birinci Sayiyi Giriniz= ");
            scanf("%f",&s1);
            printf("Ikinci Sayiyi Giriniz= ");
            scanf("%f",&s2);
            printf("Bolme Isleminin Sonucu= %.4f\n\n",s1/s2);

            return s1/s2;
}
void ortalama (int sayilar, int toplam, int n, float ort){



        for(n=0;n<=8;n++){
            int sayilar[]={1,2,3,4,5,6,7,8,9};
            toplam=toplam+sayilar[n];
        }
        ort=toplam/9;
        printf("Dizilerin Ortalama Sonucu= %f\n\n",ort);
}

int cift (int sayilar, int i){


for(i=0;i<=8;i++){

    int sayilar[]={1,2,3,4,5,6,7,8,9};

    if(i%2==0){

        printf(" %d ",i);
    }
   }
   printf("\n\n");
   return 0;
}




int main()
{
    /*Bu bir islem yaptirma uygulamasýdýr.
    Ýslemler
    -Toplama-void
    -Cýkarma-goto
    -Dizideki ilk 5 sayiyi carpma
    -carpma-int fonksiyonu
    -bolme-char fonksiyonu
    -dizideki sayilarýn ortalamasýný alma-void
    -dizideki çift sayilari yazdirma-int
    */

    int sayilar[]={1,2,3,4,5,6,7,8,9};
    int islem,sayi1,sayi2,i,sonuc,toplam,n;
    sonuc=1;
    float s1,s2,ort;

    start:

    printf("*****UYGULAMAYA HOSGELDINIZ*****\n");
    printf("1-Toplama Islemi Yaptirma\n");
    printf("2-Cikarma Islemi Yaptirma\n");
    printf("3-Carpma Islemi Yaptirma\n");
    printf("4-Bolme Islemi Yaptirma\n");
    printf("5-Dizideki Ilk 5 Sayiyi Carpma\n");
    printf("6-Dizideki Sayilarin Ortalamasini Alma\n");
    printf("7-Dizideki Cift Sayilari Yazdirma\n");
    printf("Uygulamak Istediginiz Islemi Giriniz= ");
    scanf("%d",&islem);

    switch (islem){
        case 1 :
                toplama(sayi1,sayi2);
                goto start;
                break;
        case 2 :
                goto cikarma;
                break;
        case 3 :
                carpma(sayi1,sayi2);
                goto start;
                break;
        case 4 :
                bolme(sayi1,sayi2);
                goto start;
                break;
        case 5 :
                for (i=0;i<=8;i++){

                    sonuc=sonuc*sayilar[i];
                }
                printf("Dizilerin Carpim Sonucu= %d\n\n",sonuc);
                goto start;
                break;
        case 6 :
                ortalama(sayilar,toplam,n,ort);
                goto start;
                break;
        case 7 :
                cift(sayilar,i);
                goto start;
                break;
        default :
                printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyiniz.\n\n");
                goto start;
                break;

    }


    cikarma :
            printf("Birinci Sayiyi Giriniz= ");
            scanf("%d",&sayi1);
            printf("Ikinci Sayiyi Giriniz= ");
            scanf("%d",&sayi2);
            printf("Cikarma Isleminin Sonucu= %d\n\n",sayi1-sayi2);
            goto start;


    return 0;
}
