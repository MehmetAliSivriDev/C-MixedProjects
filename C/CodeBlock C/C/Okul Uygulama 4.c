#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1-Kullan�c�dan s�nav notunu girmesini isteyiniz. Notu 50 den b�y�kse �Dersi Ge�tiniz� ,e�er �art� sa�lam�yorsa�Dersten kald�n�z� yazd�r�n�z.
	
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
