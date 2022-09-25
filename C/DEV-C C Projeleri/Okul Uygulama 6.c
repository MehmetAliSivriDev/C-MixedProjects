#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//2-100’den  50’ye  kadar  3’e  tam  bölünen sayýlarý  ekrana tersten yazdýran(küçükten  büyüðe)programý yazýnýz.
	
	int i;
	i=50;
	
	while(i<=100)
	{
		i+=1;
		
		if(i%3==0)
		{
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
