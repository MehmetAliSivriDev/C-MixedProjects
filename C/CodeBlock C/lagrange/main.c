#include <stdio.h>
#include <stdbool.h>

double lagrangeInterpolasyonHesaplama(double x, double xDegerleri[], double yDegerleri[], int noktaSayisi) {
    double sonuc = 0.0;
    double Px;

    for (int i = 0; i < noktaSayisi; i++) {
        Px = yDegerleri[i];
        for (int j = 0; j < noktaSayisi; j++) {
            if (j != i && xDegerleri[i] != xDegerleri[j])
            {
                Px *= (x - xDegerleri[j]) / (xDegerleri[i] - xDegerleri[j]);
            }
        }
        sonuc += Px;
    }
    return sonuc;
}

int main() {
    int noktaSayisi;
    bool noktaKontrol = true;
    double x;
    int sifirKontrolIndeks = 0;

    while(noktaKontrol){

        printf("Nokta Sayisini Giriniz[2,15]: ");
        scanf("%d", &noktaSayisi);

        if(noktaSayisi < 2 || noktaSayisi > 15){
            printf("\nNokta Sayisi En Az 2 En Fazla 15 Olmalidir!\n");
            noktaKontrol = true;
        }
        else{
            noktaKontrol = false;
        }

    }

    double xDegerleri[noktaSayisi];
    double yDegerleri[noktaSayisi];


    printf("Noktalarin x ve y Degerlerini Giriniz:\n");
    for (int i = 0; i < noktaSayisi; i++) {
        printf("x[%d] Degeri Giriniz= ", i);
        scanf("%lf", &xDegerleri[i]);
        printf("y[%d] Degeri Giriniz= ", i);
        scanf("%lf", &yDegerleri[i]);

        if(i != 0){
            if(xDegerleri[i] == xDegerleri[sifirKontrolIndeks]){
                printf("Sifira Bolme Hatasi Gerceklesti Lutfen Tekrar Deneyin!\n");
                printf("Sifira Bolme Hatasinin Meydana Gelmemesi icin x Degerlerinin Birbirinden Farkli Olmasi Gerekmektedir.\n");
                printf("Program Sonlandiriliyor... Tekrar Deneyiniz!");
                return 0;
            }
            else{
                sifirKontrolIndeks++;
            }
        }


    }

    printf("P(x) icin hesaplanacak x degerini giriniz: ");
    scanf("%lf", &x);

    double sonuc = lagrangeInterpolasyonHesaplama(x,xDegerleri, yDegerleri, noktaSayisi);
    printf("P(%.2lf) = %.2lf\n", x, sonuc);

    return 0;
}
