#include <stdio.h>
#include <stdlib.h>

//Ogrenci No = 1210505007
//Ogrenci Adsoyad = Mehmet Ali Sivri

//Linear Search Kismi
//********************************************************

int linearsearch (int dizi[],int boyut,int aranansayi)
{
	int i;

	for (i=0;i<boyut;i++)
	{
		if(dizi[i] == aranansayi)
		{
			return i;   //Eger dizideki eleman aradigimiz sayiya esit ise i degerini dondurucek.
		}


	}
        return -1;  //Eger dizideki eleman aradigimiz sayiya esit degil ise donguden ciktiktan sonra -1 degerini dondurucek.
}
//********************************************************

int main() {

	int boyut,i,j,aranansayi;



	printf("********PROGRAMA HOSGELDINIZ********\n\n");
	printf("Dizinin Boyutunu Giriniz= ");  //Dizinin kac elemana sahip olacagi yani boyutunu kullanicidan istiyoruz.
	scanf("%d",&boyut);

    int dizi[boyut];

	for(i=0;i<boyut;i++)
	{
		printf("Diznin %d. Degerini Giriniz= ",i+1); //Dizideki elemanlarimizi kullanicidan istiyoruz.
		scanf("%d",&dizi[i]);
	}

	printf("Dizinin Hangi Elamanini Aratmak Istiyorsunuz?= "); //Aranan elemani kullanicidan istiyoruz.
	scanf("%d",&aranansayi);

	int aramasonucu = linearsearch(dizi,boyut,aranansayi); //Mainin ustune tanimladigimiz linearsearch fonksiyonumuzu
                                                           //burada cagirarak arama islemini gerceklestiriyoruz.

	if(aramasonucu == -1)  //Dizide eleman var ise i yok ise -1 degeri yukarida dondurelecegi icin buna gore if komutu olusturuyoruz.
	{
		printf("Arattiginiz Eleman Dizide Bulunmamaktadir!");
	}
	else
	{
		printf("Arattiginiz Eleman Dizide Bulunmaktadir ve Elemanin Indeksi= %d",aramasonucu);
	}




	return 0;
}
