#include <stdio.h>
#include <stdlib.h>

int main()
{

    char adi[]="Adi= Mehmet Ali Sivri\n";
    char soyadi[]="Soyadi= SIVRI\n";
    char yasi[]="Yasi= 20\n";
    char memleketi[]="Memleketi= Bursa\n";
    char okul[]="Okudugu Bolum= Yazilim Muhendisligi Bolumu\n";


    FILE *KimlikBilgileri;

    KimlikBilgileri=fopen("C:\\Users\\sivri\\Desktop\\KimlikBilgileri.txt","w");

    fputs(adi,KimlikBilgileri);
    fputs(soyadi,KimlikBilgileri);
    fputs(yasi,KimlikBilgileri);
    fputs(memleketi,KimlikBilgileri);
    fputs(okul,KimlikBilgileri);



    fclose(KimlikBilgileri);



    return 0;
}
