#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/*
    # Soru: F(x) = x^3 -5x^2 +9x-1;
    fonksiyonunun  [0, 2] araligindaki kök degerini 8*10^-4 hata siniri içinde dogrusal interpolasyon metodu kullanarak hesaplayiniz.
    Durma Kosulu: |xn - xn-1 |< Hata

*/

//F(x) fonksiyonun koda dönüştürülmüş hali
double fonksiyon(double x){
    double sonuc;
    sonuc = pow(x,3) - 5*pow(x,2) + 9*x - 1;
    return sonuc;
}

//fonksiyonumuz sonucunun işaretini (+,-) hesaplayan kodumuz
bool isaret_hesapla(double x){
    double sonuc;
    sonuc = fonksiyon(x);

    if(sonuc < 0) return false;
    else return true;
}

int main()
{

    //Kullanacagimiz degiskenleri ve degerleri tanimliyoruz.
    int n = 1;
    double a = 0, b = 2, hata = 0.0008, hesaplanan_hata = 1, Xn, Xn_1 = 0;

    printf(".......DOGRUSAL INTERPOLASYON METODU......\n");
    printf("F(x) = x^3 -5x^2 +9x-1\n");
    printf("Aralik Degeri: [0,2]\n");
    printf("Durma Kosulu: |Xn - Xn_1| < HATA\n");
    printf("8*10^-4\n\n\n");
    printf("Adim\ta\t\tXn\t\t\tb\t\t\tF(Xn)\t\t\tHata\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");

    while(fabs(hesaplanan_hata) >= hata){
        //Dogrusal interpolasyondaki Xn'i matematiksel hesaplama işleminin koda donusturulmus hali
        Xn = ((a * fonksiyon(b)) - (b * fonksiyon(a))) / (fonksiyon(b) - fonksiyon(a));
        //Durma kosulumuzun hesaplamasini yapan kod
        hesaplanan_hata = fabs(Xn - Xn_1);
        //Durma kosulumuzda Xn'in bir önceki hali bize gerekmektedir bunu saglamak icin once Xn ve hatayi hesapliyoruz
        //daha sonrasinda ise Xn-1'i Xn'e esitleyerek bir daha hesaplama islemine gelindiginde Xn-1 eski Xn degerini almis
        //ve ona gore hata hesaplama islemi gerceklestirmis oluyoruz.
        Xn_1 = Xn;



        printf("%d\t%g\t\t%g\t\t%g\t\t%g\t\t%g\n",n,a,Xn,b,fonksiyon(Xn),hesaplanan_hata);

        //Eger durma kosulu saglanmamissa islemin devam edebilmesi icin Xn'in isaretini kontrol edip
        //aralikta ([a,b])  hangisi degisecekse onu degistirip isleme devam ediyoruz.
        if(isaret_hesapla(Xn) == true){
            b = Xn;
        }
        else{
            a = Xn;
        }


        //Adim sayimizin artisini gerceklestiriyoruz.
        n++;

    }

    //Bulunan kok sonucunu yazdiriyoruz.
    printf("\nKok: %lf",Xn);


    return 0;
}
