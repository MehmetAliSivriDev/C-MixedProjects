#include <stdio.h>
#include <stdlib.h>

void bubbleSort (int dizi[], int temp)
{
    for (int i=1;i<10;i++)
    {
        for (int j=0;j<10-i;j++)
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

int BinarySearch (int dizi[], int left, int right, int aranansayi)
{
    int mid;

    if (right >= left)
    {
       mid = (left+right)/2;

       if(dizi[mid] == aranansayi)
       {
           return mid;
       }
       if(dizi[mid] > aranansayi)
       {
           return BinarySearch(dizi,left,mid-1,aranansayi);
       }
       if(dizi[mid] < aranansayi)
       {
           return BinarySearch(dizi,mid+1,right,aranansayi);
       }

    }
    else
    {
        return -1;
    }
}






int main()
{
    int dizi[10] = {13,64,34,76,87,98,35,67,79,97};
    int aranansayi,temp;

    printf("Mevcut Dizi= ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",dizi[i]);
    }

    bubbleSort(dizi,temp);

    printf("\n\nDizinin Siralanmis Hali= ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",dizi[i]);
    }

    printf("\n\nDizide Aratmak Istediginiz Elemani Giriniz= ");
    scanf("%d",&aranansayi);

    int n = sizeof(dizi) / sizeof(dizi[0]);

    int aramasonucu = BinarySearch(dizi,0,n-1,aranansayi);

    if (aramasonucu == -1)
    {
        printf("Aradiginiz Eleman Dizide Bulunmamaktadir!");
    }
    else
    {
        printf("Aradiginiz Eleman Dizide Bulunmaktadir Indeksi = %d",aramasonucu);
    }

    return 0;
}
