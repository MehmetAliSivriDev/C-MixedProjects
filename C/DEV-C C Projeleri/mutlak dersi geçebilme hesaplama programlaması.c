#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Mutlak de�erlendirmesi olan bir dersin ge�ebilmesini hesaplayan program.
	//NOT:Final notu 50den d���k olursa ��renci yine kal�r.
	/* vize=%20
	   final=%50
	   k�sa s�nav1,2=%10
	   �dev=%10 */
	
	printf("****SISTEME HOSGELDINIZ****\n");
	
	float vize,final,kisa1,kisa2,odev,ort;
	
	printf("Vize Sinavi Notunu Giriniz= ");
	scanf("%f",&vize);
	
	printf("Final Sinavi Notunu Giriniz= ");
	scanf("%f",&final);
	
	printf("Kisa Sinav 1 Notunu Giriniz= ");
	scanf("%f",&kisa1);
	
	printf("Kisa Sinav 2 Notunu Giriniz= ");
	scanf("%f",&kisa2);
	
	printf("Odev Notunu Giriniz= ");
	scanf("%f",&odev);
	
	ort=(vize*20/100)+(final*50/100)+(kisa1*10/100)+(kisa2*10/100)+(odev*10/100);
	
	printf("Ortalamaniz= %f\n",ort);
	
	if(final<50)
	{
		printf("Final Notu 50'den Dusuk Oldugu Icin Ogrenci Dersi Gecememektedir.");
	}
	if(final>=50 && ort>=50)
	{
		printf("Ogrenci Dersi Gecebilmektedir.");
	}
    if(final>=50 && ort<50)
	{
    	printf("Ogrenci Dersi Gecememektedir.");
	}
		
	return 0;
}
