#include <stdio.h>
#include <stdlib.h>
#define  SINIF_MEVCUDU 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int vize[SINIF_MEVCUDU],final[SINIF_MEVCUDU],ysnotu[SINIF_MEVCUDU];

	for (int sayac=0; sayac<3; sayac++){
		printf("%d. Ogrencinin Vize Notunu Giriniz= ",sayac+1);
		scanf("%d",&vize[sayac]);
		printf("%d. Ogrencinin Final Notunu Giriniz= ",sayac+1);
		scanf("%d",&final[sayac]);
		ysnotu[sayac]=vize[sayac]*0.4+final[sayac]*0.6;

}
    for (int sayac2=0;sayac2<3;sayac2++){
    	printf("%d. Ogrencinin Yil Sonu Notu= %d\n",sayac2+1,ysnotu[sayac2]);
	}


   return 0 ;
}
