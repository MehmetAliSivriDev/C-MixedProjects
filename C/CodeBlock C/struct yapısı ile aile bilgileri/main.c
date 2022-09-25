#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct ailebilgileri
{
    char ad[20];
    char soyad[20];
    int yas;
    char dogumyeri[100];
    char memleket[100];
    char egitimdurumu[100];
    char okul[100];
    char meslek[100];
    int maas;
    char medenidurum[100];
};
    struct ailebilgileri bilgi;

int main()
{

    char cevap;

    baslangic :

    printf("****************************************************\n\n");
    printf("Adiniz= ");
    scanf("%s",&bilgi.ad);

    printf("Soyadiniz= ");
    scanf("%s",&bilgi.soyad);

    printf("Yasiniz= ");
    scanf("%d",&bilgi.yas);

    printf("Dogum Yeriniz= ");
    scanf("%s",&bilgi.dogumyeri);

    printf("Memleketiniz= ");
    scanf("%s",&bilgi.memleket);

    egitim :

    printf("\n\nHerhangi Bir Egitim Goruyor Musunuz? (Universite,lise vb.)\n");
    printf("Eger Cevabiniz Evet ise 'E' Hayir ise 'H' Harfini Tuslayiniz!\n\n");
    printf("Cevap= ");
    scanf("%s",&cevap);

    if (cevap == 'E')
    {
        printf("Egitim Durumunuz= ");
        scanf("%s",&bilgi.egitimdurumu);
        printf("Egitim Gordugunuz Yerin Adi= ");
        scanf("%s",&bilgi.okul);
        printf("Medeni Durumunuz= ");
        scanf("%s",&bilgi.medenidurum);
        printf("Yillik Geliriniz= ");
        scanf("%d",&bilgi.maas);
        goto devam;


    }
    if (cevap == 'H')
    {
        printf("Yaptiginiz Meslek= ");
        scanf("%s",&bilgi.meslek);
        printf("Medeni Durumunuz= ");
        scanf("%s",&bilgi.medenidurum);
        printf("Yillik Geliriniz= ");
        scanf("%d",&bilgi.maas);
        goto devam;
    }
    else
    {
        printf("Hatali Tuslama Yaptiniz Lutfen Tekrar Deneyiniz!!\n\n");
        goto egitim;
    }

    devam :

    printf("Islem Tamamlanmistir Tesekkurler...\n\n");
    Sleep(1000);

    printf("Adi= %s\n",bilgi.ad);
    printf("Soyadi= %s\n",bilgi.soyad);
    printf("Yasi= %d\n",bilgi.yas);
    printf("Dogum Yeri= %s\n",bilgi.dogumyeri);
    printf("Memleketi= %s\n",bilgi.memleket);
    printf("Egitim Durumu= %s\n",bilgi.egitimdurumu);
    printf("Egitim Gordugu Yerin Adi= %s\n",bilgi.okul);
    printf("Yaptigi Meslek= %s\n",bilgi.meslek);
    printf("Medeni Durumu= %s\n",bilgi.medenidurum);
    printf("Yillik Geliri= %d\n",bilgi.maas);

    return 0;
}
