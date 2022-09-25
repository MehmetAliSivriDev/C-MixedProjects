#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,hacimb,hacimk,kalan,alan,cevre;

    baslangic:

        printf("1-Kupun Hacmini Bulma\n");
        printf("2-Kupun Yuzey Alanini Bulma\n");
        printf("3-Kupun Bir Yuzeyin Cevresini Bulma\n");
        printf("4-Bir Kenari 4cm Olan Baska Bir Kup Yerlestirilince Kalan Hacim\n");
        scanf("%d",&secim);

        switch(secim){
            case 1 :
                    hacim(hacimb);
                    goto baslangic;
                    break;
            case 2 :
                    goto yalan;
                    break;
            case 3 :
                    ycevre(cevre);
                    goto baslangic;
                    break;
            case 4 :
                hacimb=8*8*8;
                hacimk=4*4*4;
                kalan=hacimb-hacimk;
                printf("Kalan Hacim= %d\n",kalan);
                goto baslangic;
                break;
            default :
                printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n");
                goto baslangic;
                break;
        }
            yalan:
                {
                alan=8*8*6;
                printf("Kupun Yuzey Alani= %d\n",alan);
                goto baslangic;
                }

    return 0;
}

void hacim (int hacimb){
    hacimb=8*8*8;
    printf("Kupun Hacmi= %d\n",hacimb);
}

int ycevre (int cevre){
    cevre=8*4;
    printf("Kupun Bir Kenarinin Cevresi= %d\n",cevre);

    return cevre;
}
