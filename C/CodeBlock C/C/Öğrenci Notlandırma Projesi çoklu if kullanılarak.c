#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Bu projede çoklu if kullanýlarak bir öðrencinin notlarýnýn ortalamasýnýn denk geldiði sayý notlandýrmasýný göstermesidir.
	//Öðrencinin girileceði not listesi=Sýnav1,Sýnav2,Proje,Performans Ödevi
	/* 
	   Notlandýrma 
	
	   >85-100->5
	   >70-85->4
	   >55-70->3
	   >55-40->2
	   >40-0->1                                                                                                              */
	   
	   
	   
	float s1,s2,prj,po,ort;
	   
	printf("****Ogrenci Notlandýrma Sistemine Hoþ Geldiniz****\n");
	   
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
