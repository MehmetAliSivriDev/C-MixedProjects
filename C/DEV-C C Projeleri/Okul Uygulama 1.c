#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1-Kullan�c� taraf�ndan girilen iki ondal�kl� say�n�n �arp�m�n� hesaplay�p ekrana yazd�ran program� yaz�n�z.
	
	
	float sayi1,sayi2,carpim;
	
	
	printf("Birinci Sayiyi Giriniz= ");
	scanf("%f",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz= ");
	scanf("%f",&sayi2);
	
	carpim=sayi1*sayi2;
	
	printf("Sonuc= %f",carpim);
	
	
	
	
	return 0;
}
