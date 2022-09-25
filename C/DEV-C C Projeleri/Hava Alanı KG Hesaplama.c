#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
	//Bagaj 15 kg aþmamalý
	//El 8 kg aþmamalý
	//Aþým baþýna her bir kgye 5TL ödenecektir
	
	
	int bagaj,el,bagajodeme,elodeme,toplamodeme;

	
	printf("Bagajinizin Kilosunu Giriniz=");
	scanf("%d",&bagaj);
	
	printf("El ile Tasidiginiz Esyalarin Kilosunu Giriniz=");
	scanf("%d",&el);
	
	bagajodeme=(bagaj-15)*5;
	elodeme=(el-8)*5;
	toplamodeme=bagajodeme+elodeme;
	
	printf("\n\n");
	
	printf("Bagaj Odemeniz= %d\n",bagajodeme);
	printf("El ile Tasidiginiz Esyalarin Odemesi= %d\n",elodeme);
	printf("Toplam Odemeniz= %d\n",toplamodeme);
	
	return 0;
}
