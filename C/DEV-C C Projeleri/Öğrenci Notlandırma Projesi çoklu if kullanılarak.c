#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Bu projede �oklu if kullan�larak bir ��rencinin notlar�n�n ortalamas�n�n denk geldi�i say� notland�rmas�n� g�stermesidir.
	//��rencinin girilece�i not listesi=S�nav1,S�nav2,Proje,Performans �devi
	/* 
	   Notland�rma 
	
	   >85-100->5
	   >70-85->4
	   >55-70->3
	   >55-40->2
	   >40-0->1                                                                                                              */
	   
	   
	   
	float s1,s2,prj,po,ort;
	   
	printf("****Ogrenci Notland�rma Sistemine Ho� Geldiniz****\n");
	   
	printf("Birinci Sinav Notunu Giriniz= ");
	scanf("%f",&s1);
	   
	printf("Ikinci Sinav Notunu Giriniz= ");
	scanf("%f",&s2);
	   
	printf("Proje Odevi Notunu Giriniz= ");
	scanf("%f",&prj);
	
	printf("Performans Odevi Notunu Giriniz= ");
	scanf("%f",&po);
	
	ort=(s1+s2+prj+po)/4;
	
	printf("\n");
	printf("Not Ortalamaniz= %f\n",ort);
	
	if(ort>=85)
	{
		printf("Sayi Notunuz=5");
	}
	if(70<=ort && ort<85)
	{
		printf("Sayi Notunuz=4");
	}
	if(55<=ort && ort<70)
	{
		printf("Sayi Notunuz=3");
	}
	if(40<=ort && ort<55)
	{
		printf("Sayi Notunuz=2");
	}
	if(0<=ort && ort<40)
	{
		printf("Sayi Notunuz=1");
	}	
	return 0;
}
