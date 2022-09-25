#include <stdio.h>
#include <stdlib.h>

//Linear Search 
//********************************************************

int linearsearch (int dizi[],int boyut,int aranansayi)
{
	int i;
	
	for (i=0;i<boyut;i++)
	{
		if(dizi[i] == aranansayi)
		{
			return i;
		}
		
		return -1;
	}
}
//********************************************************

int main(int argc, char *argv[]) {
	
	int boyut,i,j,aranansayi;
	int dizi[boyut];
	
	
	printf("********PROGRAMA HOSGELDINIZ********\n\n");
	printf("Dizini Boyutunu Giriniz= ");
	scanf("%d",&boyut);
	
	for(i=0;i<boyut;i++)
	{
		printf("Diznin %d. Degerini Giriniz= ",i+1);
		scanf("%d",&dizi[i]);
	}
	

	printf("Dizinin Hangi Elamanini Aratmak Istiyorsunuz?= ");
	scanf("%d",&aranansayi);

	int aramasonucu = linearsearch(dizi,boyut,aranansayi);
	
	if(aramasonucu == -1)
	{
		printf("Arattiginiz Eleman Dizide Bulunmamaktadir!");
	}
	else
	{
		printf("Arattiginiz Eleman Dizide Bulunmaktadir!");
	}
	
	
	
	for(j=0;j<boyut;j++)
	{
		printf("%d ",dizi[j]);
	}
	
	
	
	return 0;
}
