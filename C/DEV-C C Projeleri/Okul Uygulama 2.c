#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//2-Kullan�c� taraf�ndan klavyeden girilen iki adet tamsay�n�naritmetik ortalamas�n� hesaplayan ve ekrana yazan program� yaz�n�z.
	
	float sayi1,sayi2,ortalama;
	
	printf("Birinci Sayiyi Giriniz= ");
	scanf("%f",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz= ");
	scanf("%f",&sayi2);
	
	ortalama=(sayi1+sayi2)/2;
	
	printf("Sonuc= %f",ortalama);
	
	
	return 0;
}
