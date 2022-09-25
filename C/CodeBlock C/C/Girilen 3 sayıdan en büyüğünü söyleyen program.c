#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sayi1,sayi2,sayi3;
	
	//Girilen 3 sayidan en büyüðünü yazdýran program
	
	printf("*****EN BUYUK SAYI HANGISI?*****\n");
	printf("Birinci Sayiyi Giriniz= ");
	scanf("%f",&sayi1);
	printf("Ikinci Sayiyi Giriniz= ");
	scanf("%f",&sayi2);
	printf("Ucuncu Sayiyi Giriniz= ");
	scanf("%f",&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3)
	{
		printf("En Buyuk Sayi= %.2f",sayi1);
	}
	if(sayi2>sayi1 && sayi2>sayi3)
	{
		printf("En Buyuk Sayi= %.2f",sayi2);
	}
	if(sayi3>sayi1 && sayi3>sayi2)
	{
		printf("En Buyuk Sayi= %f",sayi3);
	}
	
	
	
	
	
	
	
	
	return 0;
}
