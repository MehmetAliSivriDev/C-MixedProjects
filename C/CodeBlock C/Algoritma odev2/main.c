#include <stdio.h>
#include <stdlib.h>

void ortalama (int elemanlar, int a, float ort, float toplam){

   for(a=5;a<=9;a++){

    int elemanlar[]={30,25,22,17,98,47,3,55,126,10};

    toplam=toplam+elemanlar[a];
    ort=toplam/5;
   }

    printf("Ortalama Isleminin Sonucu= %.2f\n\n",ort);
}


int main()
{
    int elemanlar[]={30,25,22,17,98,47,3,55,126,10};
    float ort,toplam;
    int islem,a,i,sonuc;
    sonuc=0;

    baslangic:

    printf("******ISLEM YAPTIRMA UYGULAMASI******\n");
    printf("1-Ilk 5 Elemanin Toplama Islemini Yaptirma\n");
    printf("2-Son 5 Elemanin Ortalama Islemini Yaptirma\n");
    printf("Uygulamak Istediginiz Islemi Giriniz= ");
    scanf("%d",&islem);

    switch (islem){

        case 1 :
            goto toplama;
            break;
        case 2 :
            ortalama(elemanlar,a,ort,toplam);
            goto baslangic;
            break;
        default :
            printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyiniz...\n");
            printf("****Lutfen 1 veya 2'yi Tuslayin!****\n\n");
            goto baslangic;
            break;
    }

    toplama:
        {

            for (i=0;i<=4;i++){

                sonuc=sonuc+elemanlar[i];
            }
            printf("Toplama Isleminin Sonucu= %d\n\n",sonuc);
            goto baslangic;
        }

    return 0;
}
