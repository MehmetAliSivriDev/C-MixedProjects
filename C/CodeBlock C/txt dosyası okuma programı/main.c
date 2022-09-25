#include <stdio.h>
#include <stdlib.h>

int main()
{
    //OKUMA YONTEMI -> 1

     FILE *dosya;
     char okuma;

     dosya=fopen("‪C:\\Users\\sivri\\Desktop\\KimlikBilgileri.txt","r");

     do
     {
        okuma=getc(dosya);

        printf("%c",okuma);
     }
     while(okuma!=EOF);
     fclose(dosya);

     //OKUMA YONTEMI -> 2

     /*FILE *dosya;
     char okuma[50];

     dosya=fopen("‪‪C:\\Users\\sivri\\Desktop\\Yeni Metin Belgesi.txt","r");

     fgets(okuma,50,dosya);
     puts(okuma);
     fclose(dosya);*/

    return 0;
}
