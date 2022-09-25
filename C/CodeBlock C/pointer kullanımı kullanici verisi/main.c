#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem,toplama,cikarma,carpma,bolme;

    int sayi;
    char kelime;

    int *ptrs=&sayi;
    char *ptrk=&kelime;

    printf("Bellekte Adresini Bulmak Istediginiz Kelimeyi Giriniz= ");
    scanf("%s",ptrk);

    printf("Bellekte Adresini Bulmak Istediginiz Sayiyi Giriniz= ");
    scanf("%d",ptrs);

    printf("Kelimenin Adresi= %x\n",ptrk);
    printf("Sayinin Adresi= %x\n",ptrs);

    hesaplama :

    printf("Adreslere Uygulamak Istediginiz Islemi Seciniz->\n");
    printf("1-)Toplama\n");
    printf("2-)Cikarma\n");
    printf("Islem= ");
    scanf("%d",&islem);

        switch(islem)
        {
            case 1 :

                printf("Adreslere Kac Eklemek Istiyorsunuz?= ");
                scanf("%d",&toplama);

                ptrk=ptrk+toplama;
                ptrs=ptrs+toplama;

                printf("Kelimenin Yeni Adresi= %x\n",ptrk);
                printf("Sayinin Yeni Adresi= %x\n",ptrs);
                goto hesaplama;
                break;

            case 2 :

                printf("Adreslerden Kac Cikarmak Istiyorsunuz?= ");
                scanf("%d",&cikarma);

                ptrk=ptrk-cikarma;
                ptrs=ptrs-cikarma;

                printf("Kelimenin Yeni Adresi= %x\n",ptrk);
                printf("Sayinin Yeni Adresi= %x\n",ptrs);
                goto hesaplama;
                break;

            default :

                printf("Hatali Secim Yaptiniz Lutfen Tekrar Deneyiniz...\n\n");
                goto hesaplama;
        }




    return 0;
}
