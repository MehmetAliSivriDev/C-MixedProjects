#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//2-100�den  50�ye  kadar  3�e  tam  b�l�nen say�lar�  ekrana tersten yazd�ran(k���kten  b�y��e)program� yaz�n�z.
	
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
