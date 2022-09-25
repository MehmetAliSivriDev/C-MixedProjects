#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sayi1,sayi2,kontrol;
	char degisim;
	
    kontrol=1;

    while(kontrol!=0){
	
	printf("*****HESAP MAKINESI*****\n\n");	
	printf("Yapmak Istediginiz Islemi Seciniz\n");
	printf("Toplama Islemi=+\n");
	printf("Cikarma Islemi=-\n");
	printf("Bolme Islemi=/\n");
	printf("Carpma Islemi=*\n");
	printf("Uygulamak Istediginiz Islem= ");
	scanf("%s",&degisim);
	
	switch (degisim) {
	
		case '+' :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&sayi1);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&sayi2);
			printf("Sonuc= %.2f",sayi1+sayi2);
			break;
		case '-' :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&sayi1);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&sayi2);
			printf("Sonuc= %.2f",sayi1-sayi2);
			break;
		case '/' :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&sayi1);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&sayi2);
			printf("Sonuc= %.2f",sayi1/sayi2);
			break;
		case '*' :
			printf("Birinci Sayiyi Giriniz= ");
			scanf("%f",&sayi1);
			printf("Ikinci Sayiyi Giriniz= ");
			scanf("%f",&sayi2);
			printf("Sonuc= %.2f",sayi1*sayi2);
			break;
		default :
			printf("Hatali Islem Sectiniz!");
			break;
    }
    printf("\n");
    printf("Kullanmaya Devam Etmek Icin 0 Disinda Bir Sayiya Basiniz.\n");
    scanf("%f",&kontrol);
 }
	return 0;
}
