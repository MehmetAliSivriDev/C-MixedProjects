#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Otomat Makinesi Projesi
	//Otomat Makinesi Ýçeriði:Su,Çikolata,bisküvi,cips,çekirdek,kola,meyvesuyu,ÇubukKraker
	
	float su,cikolata,biskuvi,cips,cekirdek,kola,meyvesuyu,cubukkraker,toplam;
	
	/*su=0.5;
	cikolata=2.5;
	biskuvi=3.5;
	cips=5.90;
	cekirdek=4;
	kola=6;
	meyvesuyu=3.5;
	cubukkraker=1.5;*/
	
	printf("********OTOMAT MAKINESI********");
	
	printf("\n\n");
	
	printf("Kac Tane Su Istiyorsunuz?= ");
	scanf("%f",&su);
	
	printf("Kac Tane Cikolata Istiyorsunuz?= ");
	scanf("%f",&cikolata);
	
	printf("Kac Tane Biskuvi Istiyorsunuz?= ");
	scanf("%f",&biskuvi);
	
	printf("Kac Tane Cips Istiyorsunuz?= ");
	scanf("%f",&cips);
	
	printf("Kac Tane Cekirdek Istiyorsunuz?= ");
	scanf("%f",&cekirdek);
	
	printf("Kac Tane Kola Istiyorsunuz?= ");
	scanf("%f",&kola);
	
	printf("Kac Tane Meyvesuyu Istiyorsunuz?= ");
	scanf("%f",&meyvesuyu);
	
	printf("Kac Tane Cubuk Kraker Istiyorsunuz?= ");
	scanf("%f",&cubukkraker);
	
	toplam=su*0.5+cikolata*2.5+biskuvi*3.5+cips*5.90+cekirdek*4+kola*6+meyvesuyu*3.5+cubukkraker*1.5;
	
	printf("\n");
	
	printf("Toplam Ucretiniz= %f",toplam);
	
	printf("\n\n");
	
	printf("*******************************");
	
	
	
	return 0;
}
