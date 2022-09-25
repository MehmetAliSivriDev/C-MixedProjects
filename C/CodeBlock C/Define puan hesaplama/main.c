#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define trpuan 5.50
#define matpuan 7.50

struct hesaplama
{
    float turkce;
    float matematik;
    float toplam;

};struct hesaplama ogrenci[3];


int main()
{

    int i;

    printf("**********PUAN HESAPLAMA/SIRALAMA UYGULAMASINA HOS GELDINIZ**********\n\n");

    for (i=0;i<=2;i++)
    {
        printf("%d. Ogrencinin Turkce Notunuzu Giriniz= ",i+1);
        scanf("%f",&ogrenci[i].turkce);
        printf("%d. Ogrencinin Matematik Notunuzu Giriniz= ",i+1);
        scanf("%f",&ogrenci[i].matematik);
        printf("\n\n");
    }

    for (i=0;i<=2;i++)
    {
        printf("%d. Ogrencinin Turkce Notu Puani= %.2f\n",i+1,ogrenci[i].turkce*trpuan);
        printf("%d. Ogrencinin Matematik Notu Puani= %.2f\n",i+1,ogrenci[i].matematik*matpuan);
        printf("%d. Ogrencinin Toplam Puani= %f\n\n",i+1,ogrenci[i].turkce*trpuan+ogrenci[i].matematik*matpuan);
    }

    return 0;
}
