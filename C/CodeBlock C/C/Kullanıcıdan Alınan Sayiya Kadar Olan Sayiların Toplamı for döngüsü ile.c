#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Kullancýdan alýnan bir sayinin o sayiya kadar olan sayýlarýn toplamýný hesaplayan program.
	
	int i,sayi,sayac;
	
	sayac=0;
	
	printf("*****SISTEME HOSGELDINIZ*****\n");
	
	printf("Bir Sayi Giriniz= ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		sayac=sayac+i;
	}
	printf("Sonuc= %d",sayac);
	
	return 0;
}
