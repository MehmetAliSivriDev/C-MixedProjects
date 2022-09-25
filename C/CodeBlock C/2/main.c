#include <stdio.h>
#include <stdlib.h>

//Ogrenci No = 1210505007
//Ogrenci Adsoyad = Mehmet Ali Sivri

//Selection Sort Kismi
//****************************************

void selectionsort (int degistirmekabi, int kontroldizi[],int dizi[])
{

    int i,m;

    for(i = 0; i < 9; i++)
    {
        int kontroldizi[2] = {89, 0}; //Bu dizimizdeki degerlerden ilki dizimizdeki elemanlardan
                                      //daha buyuk digeri ise daha dusuk olacak sekilde

        for (m = i; m < 9; m++)
        {

            if (kontroldizi[0] > dizi[m]) //89 degerinden daha dusuk bir deger ile karsilastiginda
            {                             //degistirme islemi yapiyor
                kontroldizi[0] = dizi[m];
                kontroldizi[1] = m;
            }

        }

        degistirmekabi = dizi[kontroldizi[1]]; //Siralama islemindeki degistirme islemi yapiliyor

        dizi[kontroldizi[1]] = dizi[i];

        dizi[i] = degistirmekabi;

    }
}
//****************************************

//Binary Search Kismi
//****************************************

int binarysearch (int dizi[], int baslangicindeksi, int bitisindeksi, int aranansayi)
{
    int orta;


   if (bitisindeksi >= baslangicindeksi)
   {
        orta=(baslangicindeksi+bitisindeksi)/2; //orta indeks hesaplaniyor

       if(dizi[orta] == aranansayi)
       {
           return orta; //eger aradigimiz sayi orta indeksdeki sayiya esitse onu donduruyor
       }
       if(dizi[orta] > aranansayi)
       {
            //aranan deger ortanca degerden kucukse, sag yariyi görmezden gelir
            return binarysearch(dizi, baslangicindeksi, orta - 1, aranansayi);
       }
       if(dizi[orta] < aranansayi)
       {
            //aranan deger ortanca degerden büyükse, sol yariyi görmezden gelir
            return binarysearch(dizi, orta + 1,bitisindeksi, aranansayi);

       }

   }
   else
   {
       return -1;
   }
}
//****************************************

int main()
{
    int dizi[]={1,7,3,88,34,76,9,24,45};
    int kontroldizi[2] = {89, 0};

    int aranansayi,degistirmekabi,i,m,j;

    selectionsort(degistirmekabi,kontroldizi,dizi);

    printf("********PROGRAMA HOSGELDINIZ********\n\n");
    printf("Dizide Aramak Istediginiz Elemani Giriniz= "); //Kullanicidan aramak istedigi elemani
    scanf("%d",&aranansayi);                               //istiyoruz

    printf("\n");


    printf("Dizinin Siralanmis Hali= ");

        for( j=0;j<9;j++)
        {
            printf("%d ",dizi[j]);  //Dizimizin siralama islemini yapiyoruz
        }
    printf("\n");

    int aramasonucu = binarysearch(dizi,0,10,aranansayi);
    if(aramasonucu == -1)  //Dizide aradigimiz elemanin olup olmadigini buluyoruz
    {
        printf("Aradiginiz Elaman Bu Dizide Bulunmamaktadir!!\n");

    }
    else
    {
        printf("Aradiginiz Eleman Bu Dizide Bulunmaktadir Ve Elamanin Indeksi= %d\n",aramasonucu);

    }


    return 0;
}
