#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Verilen Degerin Faktoriyelini Hesaplayan Kodumuz.
double faktoriyelHesaplama(double sayi){
    double sonuc = 1;
    for(int i = 1; i <= sayi; i++){
        sonuc *= i;
    }
    return sonuc;
}

//Fonksiyonu Hesaplayan Kodumuz
double fonksiyonHesaplama (double katsayilar[],int kuvvetler[],double x){
    double sonuc = 0;
    for(int i = 0;i < 3; i++){
        sonuc += katsayilar[i]  * pow(x,kuvvetler[i]);
    }
    return sonuc;
}

//Turevi Hesaplayan Kodumuz
double turevAlma(double x,int turevSayisi){
    double sonuc = 0;

    double katsayilar[3] = {0.75,-2,1};
    double kuvvetler[3] = {5,3,0};

    double tmp_katsayilar[3];
    int tmp_kuvvetler[3];

    for(int i=0;i<3;i++){
        tmp_katsayilar[i] = katsayilar[i];
        tmp_kuvvetler[i] = kuvvetler[i];
    }

    for(int i =0; i< turevSayisi;i++){

        for(int i=0;i<3;i++){

            if(tmp_kuvvetler[i] == 0){
                tmp_katsayilar[i] = 0;
            }
            else{
                tmp_katsayilar[i] = tmp_katsayilar[i] * tmp_kuvvetler[i];
                tmp_kuvvetler[i]--;
            }
        }


    }
    sonuc = fonksiyonHesaplama(tmp_katsayilar,tmp_kuvvetler,x);
    return sonuc;

}

//Taylor Hesaplamasi Yapan Kodumuz
double taylorHesaplama(double x0, double x, int terimSayisi){

    double toplam = 0;
    for (int i = 0; i < terimSayisi; i++) {

        toplam += (pow(x - x0, i) * turevAlma(x0,i)) / faktoriyelHesaplama(i);

    }

    return toplam;
}

int main()
{
    int terimSayisi;
    double x0,x;

    terimSayisiKontrol:

    printf("TAYLOR SERI ACILIMINDA OLMASI GEREKEN TERIM SAYISINI GIRINIZ[3,8]= ");
    scanf("%d",&terimSayisi);

    if(terimSayisi < 3 || terimSayisi > 8){
        printf("Gecersiz Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n");

        goto terimSayisiKontrol;
    }

    x0Kontrol:

    printf("TAYLOR SERISI ACILIMI ICIN X0 DEGERINI GIRINIZ[-2,2]=");
    scanf("%lf",&x0);

    if(x0 < -2 || x0 > 2){
        printf("Gecersiz Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n");

        goto x0Kontrol;
    }

    xKontrol:

    printf("TAYLOR SERISI ACILIMI ICIN X DEGERINI GIRINIZ[-4,4]=");
    scanf("%lf",&x);

    if(x < -4 || x > 4){
        printf("Gecersiz Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n");

        goto xKontrol;
    }

    double cevap = taylorHesaplama(x0, x, terimSayisi);

    printf("x:%lf ICIN FONKSIYONUN SONUCU= %lf",x,cevap);


    return 0;
}
