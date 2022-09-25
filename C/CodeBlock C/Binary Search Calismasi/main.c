#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int dizi[],int boyut, int temp)
{
        for (int i=1;i<boyut;i++)
        {
            for(int j=0;j<boyut-i;j++)
                {

                    if (dizi[j] > dizi[j+1])
                        {
                            temp = dizi[j];
                            dizi[j] = dizi[j+1];
                            dizi[j+1] = temp;

                        }
                }
        }

}


int binarySearch (int dizi[],int left,int right,int aranansayi)
{
    int mid;

    if (right >= left)
    {
        mid = (left+right)/2;

        if(dizi[mid] == aranansayi)
        {
            return mid;
        }
        if (dizi[mid] > aranansayi)
        {
            binarySearch(dizi,left,mid-1,aranansayi);
        }
        if (dizi[mid] < aranansayi)
        {
            binarySearch(dizi,mid+1,right,aranansayi);
        }
        else
        {
            return -1;
        }

    }


}







int main()
{
    int boyut,temp,aranansayi;

    printf("Dizinin Boyutunu Giriniz= ");
    scanf("%d",&boyut);

    int dizi[boyut];

    for (int i=0;i<boyut;i++)
    {
        printf("Dizinin %d. Elemanini Giriniz= ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("\nOlusturmus Oldugunuz Dizi= ");

    for (int i=0;i<boyut;i++)
    {

        printf("% d ",dizi[i]);
    }

    printf("\nOlusturmus Oldugunuz Dizinin Siralanmis Hali= ");

    bubbleSort (dizi,boyut,temp);

    for (int j=0;j<boyut;j++)
    {
        printf("% d ",dizi[j]);
    }

    printf("\nDizide Aratmak Istediginiz Sayiyi Giriniz= ");
    scanf("%d",&aranansayi);

    int n = sizeof(dizi) / sizeof(dizi[0]);

    int sonuc = binarySearch(dizi,0,n-1,aranansayi);

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
