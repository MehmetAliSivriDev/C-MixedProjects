#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 1 ile 20 aras�ndaki �ift say�lar� listeleyen lakin 14 say�s�n� listelemeyen program� yaz.
	
	int i,sayi;
	
	i=0;
	
	while(i<20)
	{
		i++;
		if(i%2==0 && i%14!=0)
		{
          printf("%d\n",i);
		}
    }
	return 0;
}
