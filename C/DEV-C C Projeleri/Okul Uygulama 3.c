#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//3-Kullanýcýdan iki tamsayý isteyiniz.Bu tamsayýlar birbirine bölündüðünde bölümü ve kalaný ekrana yazan programý yazýnýz.
	
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
