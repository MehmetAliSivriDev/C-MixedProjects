#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//3-Kullan�c�dan iki tamsay� isteyiniz.Bu tamsay�lar birbirine b�l�nd���nde b�l�m� ve kalan� ekrana yazan program� yaz�n�z.
	
	int sayi1,sayi2,kalan;
	float bolum;
	
	printf("Bir Sayi Giriniz= ");
	scanf("%d",&sayi1);
	
	printf("Ikinci Sayiyi Giriniz= ");
	scanf("%d",&sayi2);
	
	bolum=sayi1/sayi2;
	kalan=sayi1%sayi2;
	
	printf("Bolum= %f\n",bolum);
	printf("Kalan= %d",kalan);

	
	return 0;
}
