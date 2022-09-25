#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[]={90,85,48,65,56,75,70,60};
   int secim,i,sonuc,toplam,toplami;
   float ort;
   baslangic:
       printf("1-Dizilerin Ortalamasini Alma\n");
       printf("2-Dizilerin Carpimini Bulma\n");
       printf("3-Son 5 Diziyi Yazdirma\n");
       printf("4-Dizilerin Toplamini Bulma\n");
       printf("5- 5'e Tam Bolunebilen Dizileri Yazdirma\n");
       printf("1-Uygulamak Istediginiz Islemi Girin= ");
       scanf("%d",&secim);

       switch (secim){

            case 1 :
                    ortalama(ort,toplam,i);
                    goto baslangic;
                    break;
            case 2 :
                    goto carpim;
                    break;
            case 3 :
                    son(i);
                    goto baslangic;
                    break;
            case 4 :
                    tp(i,toplami);
                    goto baslangic;
                    break;
            case 5 :
                for(i=0;i<=7;i++){
                    if(dizi[i]%5==0){
                        printf("%d\n",dizi[i]);
                    }
                }
                goto baslangic;
                break;
            default :
                printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyin\n");
                break;
       }
        carpim:
            {
                sonuc=1;
                for(i=0;i<=7;i++){
                    sonuc=sonuc*dizi[i];
                }
                printf("Sonuc= %d\n",sonuc);
                goto baslangic;
            }

    return 0;
}

void ortalama (float ort, int toplam, int i){
toplam=0;
int dizi[]={90,85,48,65,56,75,70,60};
    for(i=0;i<=7;i++){
        toplam=toplam+dizi[i];
        ort=toplam/8;
    }
    printf("Sonuc= %f\n",ort);
}

int son (int i){
int dizi[]={90,85,48,65,56,75,70,60};
    for(i=3;i<=7;i++){
        printf("%d\n",dizi[i]);
    }
    return dizi[i];
}

void tp (int i,int toplami){
int dizi[]={90,85,48,65,56,75,70,60};
    for(i=0;i<=7;i++){
        toplami=toplami+dizi[i];
    }
    printf("Sonuc= %d\n",toplami);
}
