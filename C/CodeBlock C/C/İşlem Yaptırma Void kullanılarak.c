#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void toplama (float a, float b){

	printf("Toplama Islemi Sonucu= %.2f",a+b);
}
void cikarma (float a, float b){
	printf("Cikarma Islemi Sonucu= %.2f",a-b);
}
void carpma (float a, float b){
	printf("Carpma Islemi Sonucu= %.2f",a*b);
}
void ort (float a, float b){
	printf("Ortlama Islemi Sonucu= %.2f",(a+b)/2);
}
void bolum (float a, float b){
	printf("Bolme Islemi Sonucu= %.2f\n",a/b);
}
void kalan (int a, int b){
	printf("Kalan=%d",a%b);
}


int main(int argc, char *argv[]) {
	
	//Bu progmra iþlem yaptýrma programýdýr void örneðidir bir nevi.
	/* ÝÞLEMLER:
	 -Toplama
	 -Çýkarma
	 -Çarpma
	 -Girilen 2 sayýnýn ortalamasýný alma
	 -Girilen 2 sayýnýn bölümü ve kalanýný yazdýrma */
	
	int degisim;
	float a,b;
	baslangic:
	printf("*****Uygulamaya Hos Geldiniz!*****\n");
	printf("*****Yapmak Istediginiz Islemi Seciniz*****\n\n");
	printf("1-Toplama Islemi\n");
	printf("2-Cikarma Islemi\n");
	printf("3-Carpma Islemi\n");
	printf("4-Ortalam Alma Islemi\n");
	printf("5-Bolum ve Kalan Yazdirma Islemi\n");
	printf("Uygulamak Istediginiz Islemi Yaziniz=");
	scanf("%d",&degisim);
	
	
	switch(degisim){
	
		case 1 :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&a);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&b);
			toplama(a,b);
			break;
		case 2 :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&a);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&b);
			cikarma(a,b);
			break;
		case 3 :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&a);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&b);
			carpma(a,b);
			break;
		case 4 :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&a);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&b);
			ort(a,b);
			break;
		case 5 :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&a);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&b);
			bolum(a,b);
			kalan(a,b);
			break;
		default :
			printf("Hatali Islem Sectiniz!\n");
			printf("******************************\n\n");
			goto baslangic;
	}
	
	
	
	return 0;
}
