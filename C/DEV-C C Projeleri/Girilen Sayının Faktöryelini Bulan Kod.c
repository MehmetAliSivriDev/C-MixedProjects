#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Girilen sayýnýn faktöryelini bulan kod.
	
	int sayi,faktoryel,i;
    
	faktoryel=1;
	
	printf("Faktoryelini Bulmak Istediginiz Sayiyi Giriniz= ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
	
		faktoryel=faktoryel*i;
	}
    printf("Girdiginiz Sayinin Faktoryeli= %d",faktoryel);
	
	return 0;
}
