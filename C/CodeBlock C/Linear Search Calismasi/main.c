#include <stdio.h>
#include <stdlib.h>

int linearSearch (int dizi[], int boyut, int aranansayi)
{
    for (int i=0;i<boyut;i++)
    {
        if (aranansayi == dizi[i])
        {
           return i;
        }
    }
    return -1;
}





int main()
{
    int boyut,aranansayi;


    printf("Dizinin Boyutunu Giriniz= ");
    scanf("%d",&boyut);

    int dizi[boyut];

    for (int i=0;i<boyut;i++)
    {
        printf("Dizinin %d. Elemanini Giriniz= ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("Olusturulan Dizi= ");

    for(int j=0;j<boyut;j++)
    {
        printf("% d",dizi[j]);
    }
    printf("\n\n");
    printf("Dizinizde Aramak Istediginiz Elemani Giriniz= ");
    scanf("%d",&aranansayi);

    int sonuc = linearSearch(dizi,boyut,aranansayi);

    if (sonuc == -1)
    {
        printf("Aradiginiz Eleman Dizide Bulunmamaktadir!");
    }
    else
    {
        printf("Aradiginiz Eleman Dizide Bulunmaktadir Indeksi= %d",sonuc);

    }


    return 0;
}
