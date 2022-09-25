#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void cevre (int taban, int ikincikenar, int ucuncukenar){
	
	printf("Ucgenin Cevresi=Taban Kenar + Ikinci Kenar + Ucuncu Kenar = %d + %d + %d = %d\n",taban,ikincikenar,ucuncukenar,taban+ikincikenar+ucuncukenar);
}


int main(int argc, char *argv[]) {
	
	//1-Üçgenin taban uzunluðu 10cm, ikinci kenarý5cm ,üçüncü kenarý4cm veyüksekliði3 cm’dir.
	
	int secim,taban,ikincikenar,ucuncukenar,yukseklik;
	
	taban=10;
	ikincikenar=5;
	ucuncukenar=4;
	yukseklik=3;
	 
	baslangic: 
	
	printf("******Yapmak Istediginiz Islemi Seciniz******\n");
	printf("1-Ucgenin Cevresini Hesaplama\n");
	printf("2-Ucgenin Alanini Hesaplama\n");
	printf("Uygulamak Istediginiz Islemi Seciniz= ");
	scanf("%d",&secim);
	
	switch(secim){
	
		case 1 :
			cevre(taban,ikincikenar,ucuncukenar);
			goto baslangic;
			break;
        case 2 :
        	goto alan;
        	goto baslangic;
        	break;
        default :
    
        	break;
   }
   alan:
 		
		 printf("Ucgenin Alani=(Taban Kenar*Yukseklik)/2= %d",(taban*yukseklik)/2);
	 

	return 0;
}
