#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    int puan,dogru,yanlis;
    char islem;
    char kitapyazari[20];
    char adkontrol=0;
    char soru1[]="OguzAtay";
    char soru2[]="OrhanPamuk";
    char soru3[]="AhmetHamdiTanpinar";
    char soru4[]="YasarKemal";
    char soru5[]="HalidZiyaUsakligil";

    baslangic:

    puan=0;
    dogru=0;
    yanlis=0;

    printf("********YAZAR-KITAP BILGI YARISMASINA HOSGELDINIZ********\n\n");
    printf("Yarisma Bilgilendirmesi\n");
    printf("-----------------------\n");
    printf("Toplamda 5 Soru Bulunmaktadir\n");
    printf("Her Dogru Soruda Yarismaci 20 Puan Alicaktir\n");
    printf("Lutfen Cevaplari Ad Ve Soyad Seklinde Giriniz\n");
    printf("Ornek=>MehmetAliSivri\n");
    printf("Yarismada BASARILAR!\n\n");

    printf("1.SORU-)KITABIN ADI= TUTUNAMAYANLAR\n");
    printf("Yazarin Adi Ve Soyadi= ");
    scanf("%s",kitapyazari);

    adkontrol=strcmp(kitapyazari,soru1);

    if(adkontrol==0)
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nTEBRIKLER CEVAP DOGRU!\n");
        printf("+20 PUAN\n\n");
        dogru+=1;
        puan+=20;
    }
    else
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nYANLIS CEVAP VERDINIZ!\n");
        printf("+0 PUAN\n\n");
        yanlis+=1;
    }

    printf("2.SORU-)KITABIN ADI= KARA KITAP\n");
    printf("Yazarin Adi Ve Soyadi= ");
    scanf("%s",kitapyazari);

    adkontrol=strcmp(kitapyazari,soru2);

    if(adkontrol==0)
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nTEBRIKLER CEVAP DOGRU!\n");
        printf("+20 PUAN\n\n");
        dogru+=1;
        puan+=20;
    }
    else
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nYANLIS CEVAP VERDINIZ!\n");
        printf("+0 PUAN\n\n");
        yanlis+=1;
    }

    printf("3.SORU-)KITABIN ADI= SAATLERI AYARLAMA ENSTITUSU\n");
    printf("Yazarin Adi Ve Soyadi= ");
    scanf("%s",kitapyazari);

    adkontrol=strcmp(kitapyazari,soru3);

    if(adkontrol==0)
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nTEBRIKLER CEVAP DOGRU!\n");
        printf("+20 PUAN\n\n");
        dogru+=1;
        puan+=20;
    }
    else
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nYANLIS CEVAP VERDINIZ!\n");
        printf("+0 PUAN\n\n");
        yanlis+=1;
    }

    printf("4.SORU-)KITABIN ADI= INCE MEMED 1\n");
    printf("Yazarin Adi Ve Soyadi=");
    scanf("%s",kitapyazari);

    adkontrol=strcmp(kitapyazari,soru4);

    if(adkontrol==0)
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nTEBRIKLER CEVAP DOGRU!\n");
        printf("+20 PUAN\n\n");
        dogru+=1;
        puan+=20;
    }
    else
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nYANLIS CEVAP VERDINIZ!\n");
        printf("+0 PUAN\n\n");
        yanlis+=1;
    }

    printf("5.SORU-)KITABIN ADI= ASK-I MEMNU\n");
    printf("Yazarin Adi Ve Soyadi=");
    scanf("%s",kitapyazari);

    adkontrol=strcmp(kitapyazari,soru5);

    if(adkontrol==0)
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nTEBRIKLER CEVAP DOGRU!\n");
        printf("+20 PUAN\n\n");
        dogru+=1;
        puan+=20;
    }
    else
    {
        printf("\nCevap Kontrol Ediliyor...");
        Sleep(1500);
        printf("\nYANLIS CEVAP VERDINIZ!\n");
        printf("+0 PUAN\n\n");
        yanlis+=1;
    }

    printf("TEBRIKLER YARISMA SONLANMISTIR!\n");
    printf("PUANINIZ VE DOGRU YANLISINIZ HESAPLANIYOR...\n");
    Sleep(1500);
    printf("Toplam Puan= %d\n",puan);
    printf("Dogru Sayisi= %d\n",dogru);
    printf("Yanlis Sayisi= %d\n\n",yanlis);
    printf("Tekrar Yarismak Ister Misiniz?\n\n");
    printf("Evet Istiyorum = E\n");
    printf("Hayir Istemiyorum = H\n");
    printf("Ne Yapmak Istiyorsunuz?= ");
    scanf("%s",&islem);

        if(islem == 'E')
        {
            printf("Sistem Sifirlaniyor...\n");
            printf("BASARILAR!!\n\n");
            Sleep(2000);
            goto baslangic;
        }
        if(islem == 'H')
        {
            printf("Sistem Kapatiliyor...\n");
            printf("HOSCAKALIN!!");
            Sleep(1000);
            return 0;
        }

    return 0;
}
