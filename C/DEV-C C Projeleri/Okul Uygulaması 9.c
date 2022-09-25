#include <stdio.h>
#include <stdlib.h>
#define SINIF_MEVCUDU 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ogrenci_numaralari [SINIF_MEVCUDU]={1,2,3,4,5};
	char gecti_kaldi [SINIF_MEVCUDU];
	
	float vize [SINIF_MEVCUDU];
	float final [SINIF_MEVCUDU];
	
	for(int i= 0;i<5;i++)
	{
		printf("%d. Ogrenci Numarasi= %d\n",i+1,ogrenci_numaralari[i]);
	}

	printf("\n\n");
	
	int A[5];
	char B[5];
	double C[5];
	float D[5];
	
	printf("A dizisinin boyutu= %d byte",sizeof(A));
	printf("B dizisinin boyutu= %d byte",sizeof(B));
	printf("C dizisinin boyutu= %d byte",sizeof(C));
	printf("D dizisinin boyutu= %d byte",sizeof(D));
	
	printf("A dizisinindeki bir elemanýn boyutu= %d byte",sizeof(A)/10);
	printf("B dizisinindeki bir elamanýn boyutu= %d byte",sizeof(B)/5);
	printf("C dizisinindeki bir elamanýn boyutu= %d byte",sizeof(C)/5);
	printf("D dizisinindeki bir elamanýn boyutu= %d byte",sizeof(D)/5);
	
			
	return 0;
}
