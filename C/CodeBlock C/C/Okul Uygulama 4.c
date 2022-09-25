#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1-Kullanýcýdan sýnav notunu girmesini isteyiniz. Notu 50 den büyükse “Dersi Geçtiniz” ,eðer þartý saðlamýyorsa“Dersten kaldýnýz” yazdýrýnýz.
	
	int sinav1;
	
	printf("Sinav Notunuzu Giriniz= ");
	scanf("%d",&sinav1);
	
	if(sinav1>=50)
	{
		printf("TEBRIKLER DERSI GECTINIZ!");
	}
	else
	{
		printf("MAALESEF DERSI GECEMEDINIZ:(");
	}
	
	return 0;
}
