#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//4-Kullan�c�dan  1  ile  7  aras�nda  bir  say�  girmesini  isteyiniz.  Girilen  de�ere  g�re  hangi  g�n oldu�unu ekrana yazd�ran program� yaz�n�z.
	
	int sayi;
	
	printf("GUN SECINIZ?= [1] [2] [3] [4] [5] [6] [7]= ");
	scanf("%d",&sayi);
	
	switch (sayi) {
	
	case 1 :
		printf("\nPazartesi Gununu Sectiniz\n");
		break;
	case 2 :
	    printf("\nSali Gununun Sectiniz\n");
		break;
	case 3 :
	    printf("\nCarsamba Gununu Sectiniz\n");
		break;
	case 4 :
	    printf("\nPersembe Gununu Sectiniz\n");
		break;
	case 5 :
	    printf("\nCuma Gununu Sectiniz\n");
		break;
	case 6 :
	    printf("\nCumartesi Gununu Sectiniz\n");
		break;				
	case 7 :
		printf("\nPazar Gununu Sectiniz\n");
		break;
	default :
		printf("Belirtilen Sayilerden Herhangi Birini Girmediniz!");
		break;
	
	}
	
	return 0;
}
