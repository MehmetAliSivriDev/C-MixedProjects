#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
  char a[1],b[2];
  
  printf("Harf Giriniz= ");
  
  scanf("%s",a);
  
  scanf("%s",b);

  printf("Girdiginiz harf= %s - %s",a,b);	
	return 0;
}
