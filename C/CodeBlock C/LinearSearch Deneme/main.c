#include <stdio.h>
#include <stdlib.h>

int LinearSearch (int dizi[], int aranansayi)
{
   for (int i=0;i<10;i++)
   {
      if(dizi[i] == aranansayi)
      {
          return i;
      }
   }

   return -1;
}

int main()
{
    int dizi[10] = {13,42,52,26,35,31,86,45,65,78};

    int aranansayi;

    printf("Dizi= ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",dizi[i]);

    }

    printf("\n\nAratmak Istediginiz Elemani Giriniz= ");
    scanf("%d",&aranansayi);

    int aramasonucu = LinearSearch(dizi,aranansayi);

    if(aramasonucu == -1)
    {
     printf("Aradiginiz Eleman Dizide Bulunmamaktadir!");
    }
    else
    {
     printf("Aradiginiz Eleman Dizide Bulunmaktadir Indeksi = %d",aramasonucu);
    }



    return 0;
}
