#include <stdio.h>
#include <stdlib.h>

int main()
{

    int secim,sayi1,sayi2,cikarma,carpma,toplam;
    float bolum;


    printf("** HESAP MAKINASI **");

    printf("1-toplama islemi \n");
    printf("2-cikarma islemi \n");
    printf("3-carpma islemi \n");
    printf("4-bolme islemi \n");
    printf("yapmak istediginiz islemi yapýnýz: ");
    scanf("%d",&secim);

tekrar_basla:

    switch(secim)
    {
    case 1 :
        toplama(toplam,sayi1,sayi2);
        goto tekrar_basla;
        break;

    case 2:
        goto cikarma;
        break;

    case 3:
        carpma(carpim,sayi1,sayi2);
        goto tekrar_basla;
        break;

    case 4:
        bolme(sayi1,sayi2,bolum);
        goto tekrar_basla;
        break;

    default:
        printf("hatali secim yaptiniz ");
        goto tekrar_basla;
        break;



    }


cikarma:
    {
        printyf("birinci sayiyi giriniz: ");
        scanf("%d",&sayi1);
        printf("ikinci  sayiyi giriniz: ");
        scanf("%d",&sayi2);

        cikarma=sayi1-sayi2;
        printf("cikarma sonucu: %d",cikarma);
        goto tekrar_basla;

    }

    return 0;
}


    void toplama (int toplam,int sayi1,int sayi2)
    {
        printf("birinci sayiyi giriniz: ");
        scanf("%d",&sayi1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&sayi2);

        toplam=sayi1+sayi2;
        printf("toplam sonucu: %d",toplam );

    }

    int carpma (int carpim,int sayi1,int sayi2)
    {
        printf("birinci sayiyi giriniz: ");
        scanf("%d",&sayi1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&sayi2);

        carpim=sayi1*sayi2;
        printf("carpma sonucu: %d",carpim);

        return 0;
    }


    void bolme (int sayi1,int sayi2,float bolum)
    {
        printf("birinci sayiyi giriniz: ");
        scanf("%d",&sayi1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&sayi2);

        bolum=sayi1/sayi2;
        printf("bolum sonucu: %f",bolum);

    }
