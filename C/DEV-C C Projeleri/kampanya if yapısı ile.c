#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Kampanya Katýlma Hakký Projesi belli bir alýþveriþ ücreti seviyesini geçen müþterilere kampanyaya katýlýp katýlmama hakkýný gösteren program.
	//Marketimizeki Ürünler:Su,Ayran,Kola,Bisküvi,Cips,Sabun,Deterjan,Tuvalet Kaðýdý,Þampuan,Hazýr Donmuþ Gýda.
	//Kampanyaya Katýlma Hakký için 85TL ve üzeri alýþ veriþ yapýlmalý!
	
	float su,ayran,kola,biskuvi,cips,sabun,deterjan,tuvaletk,sampuan,hdg,toplam,katilimhakki;
	
    /*su=0.5;
    ayran=1;
    kola=6;
    biskuvi=2.5;
    cips=5.90;
    sabun=3.5;
    deterjan=7.5;
    tuvaletk=12.5;
    sampuan=21.5;
    hdg=10.5;*/
    
    printf("********KAMPANYA KATILIM HAKKI PROGRAMI********\n\n");
    
    printf("Kac Tane Su Aldiniz?= ");
    scanf("%f",&su);
    
    printf("Kac Tane Ayran Aldiniz?= ");
    scanf("%f",&ayran);
    
    printf("Kac Tane Kola Aldiniz?= ");
    scanf("%f",&kola);
    
    printf("Kac Tane Biskuvi Aldiniz?= ");
    scanf("%f",&biskuvi);
    
    printf("Kac Tane Cips Aldiniz?= ");
    scanf("%f",&cips);
    
    printf("Kac Tane Sabun Aldiniz?= ");
    scanf("%f",&sabun);
    
    printf("Kac Tane Deterjan Aldiniz?= ");
    scanf("%f",&deterjan);
    
    printf("Kac Tane Tuvalet Kagidi Aldiniz?= ");
    scanf("%f",&tuvaletk);
    
    printf("Kac Tane Sampuan Aldiniz?= ");
    scanf("%f",&sampuan);
    
    printf("Kac Tane Hazir Gida Aldiniz?= ");
    scanf("%f",&hdg);
    
    toplam=su*0.5+ayran*1+kola*6+biskuvi*2.5+cips*5.90+sabun*3.5+deterjan*7.5+tuvaletk*12.5+sampuan*21.5+hdg*10.5;
    
    printf("Toplam Ucretiniz= %f\n",toplam);
    
	katilimhakki=toplam;
    
    if(katilimhakki>=85)
	{
    	printf("****TEBRIKLER KAMPANYAYA KATILMA HAKKI KAZANDINIZ****");
	}
	else
	{
		printf("****MAALESEF KAMPANYAYA KATILMA HAKKI KAZANAMADINIZ****");
	}	
	
	return 0;
}
