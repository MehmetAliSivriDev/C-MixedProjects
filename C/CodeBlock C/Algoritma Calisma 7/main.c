#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]={34,45,60,23,29,33,66,78};
    int secim,i,carpim,s1,s2;
    float sayi1,sayi2;
    baslangic:
    printf("1-Toplam\n");
    printf("2-Cikarma\n");
    printf("3-Carpma\n");
    printf("4-Bolme\n");
    printf("5- 3'e Tam Bolunen Dizileri Yazdirma\n");
    printf("6-Son 5 Dizinin Carpimini Yazdirma\n");
    printf("7-Ilk 4 Diziden 5'e Tam Bolunenleri Yazdirma\n");
    printf("Uygulamak Istediginiz Islemi Giriniz= ");
    scanf("%d",&secim);
    carpim=1;
    switch(secim){
    case 1 :
        goto toplam;
        break;
    case 2 :
        cikarma(sayi1,sayi2);
        goto baslangic;
        break;
    case 3 :
        carpma(s1,s2);
        goto baslangic;
        break;
    case 4 :
        goto bolme;
        break;
    case 5 :
        for(i=0;i<=7;i++)
        {
            if(dizi[i]%3==0)
            {
                printf("%d\n",dizi[i]);
            }
        }
        goto baslangic;
        break;
    case 6 :
        for (i=3;i<=7;i++)
        {
            carpim=carpim*dizi[i];
        }
        printf("Sonuc= %d\n",carpim);
        goto baslangic;
        break;
    case 7 :
        for (i=0;i<=3;i++)
        {
            if (dizi[i]%5==0)
            {
                printf("%d\n",dizi[i]);
            }
        }
        goto baslangic;
        break;
    default :
        printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyin!\n");
        goto baslangic;
        break;
    }
        toplam :
            {
                printf("Birinci Sayiyi Giriniz= ");
                scanf("%f",&sayi1);
                printf("Ikinci Sayiyi Giriniz= ");
                scanf("%f",&sayi2);
                printf("Sonuc= %f\n",sayi1+sayi2);
                goto baslangic;
            }
        bolme :
            {
                printf("Birinci Sayiyi Giriniz= ");
                scanf("%f",&sayi1);
                printf("Ikinci Sayiyi Giriniz= ");
                scanf("%f",&sayi2);
                printf("Sonuc= %f\n",sayi1/sayi2);
                goto baslangic;
            }

    return 0;
}

void cikarma (float sayi1, float sayi2)
{
                printf("Birinci Sayiyi Giriniz= ");
                scanf("%f",&sayi1);
                printf("Ikinci Sayiyi Giriniz= ");
                scanf("%f",&sayi2);
                printf("Sonuc= %f\n",sayi1-sayi2);
}
int carpma (int s1, int s2)
{
                printf("Birinci Sayiyi Giriniz= ");
                scanf("%d",&s1);
                printf("Ikinci Sayiyi Giriniz= ");
                scanf("%d",&s2);
                printf("Sonuc= %d\n",s1*s2);

                return s1*s2;
}
