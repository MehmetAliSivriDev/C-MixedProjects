#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Bu program ile istediðiniz bir yazýyý istediðiniz kadar yazdýrabilirsiniz.
	
	int i,sayi,sayac;
	
	sayac=0;
	
	char ad[20];
	
	printf("*****SISTEME HOSGELDINIZ*****\n");
	
	printf("Yazmak Istediginiz Adi Giriniz= ");
	scanf("%s",ad);
	
	printf("Bu Adi Ne kadar Yazdirmak Istiyorsunuz?= ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		sayac+=1;
		printf("%d - %s\n",sayac,ad);
	}
			
	return 0;
}
