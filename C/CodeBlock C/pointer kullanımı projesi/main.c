#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    sayi=10;

    int *pts=&sayi;

    char ad[20]="MehmetAli";

    char *ptk=&ad;

    printf("Sayinin Adresi= %x\n",pts);
    printf("Kelimenin Adresi= %x\n",ptk);

    printf("\nBellekteki Adreslerin 5 Artisi ->\n");

    pts+=5;
    ptk+=5;

    printf("Sayinin Adresi= %x\n",pts);
    printf("Kelimenin Adresi= %x\n",ptk);

    printf("\nBellekteki Adreslerin 5 Azalisi ->\n");

    pts-=5;
    ptk-=5;

    printf("Sayinin Adresi= %x\n",pts);
    printf("Kelimenin Adresi= %x\n",ptk);

    printf("\nGoruldugu Gibi Adres Tekrar Eski Haline Gelior!...\n\n");

    return 0;
}
