#include <stdio.h>
#include <stdlib.h>

int main()
{
int faktor=1;
int secim,i;

printf("Faktoriyelini Hesaplamak Istediginiz Sayiyi Secin=[5][6][4][7][8][10]\n");
printf("Faktoriyelini Bulmak Istedigim Sayi= ");
scanf("%d",&secim);

switch (secim){

    case 5 :
        for(i=1;i<=5;i++){
            faktor=faktor*i;
        }
        printf("5 Sayisinin Faktoru= %d",faktor);
        break;
    case 6 :
        for(i=1;i<=6;i++){
            faktor=faktor*i;
        }
        printf("6 Sayisinin Faktoru= %d",faktor);
        break;
    case 4 :
        for(i=1;i<=4;i++){
            faktor=faktor*i;
        }
        printf("4 Sayisinin Faktoru= %d",faktor);
        break;
    case 7 :
        for(i=1;i<=7;i++){
            faktor=faktor*i;
        }
        printf("7 Sayisinin Faktoru= %d",faktor);
        break;
    case 8 :
        for(i=1;i<=8;i++){
            faktor=faktor*i;
        }
        printf("8 Sayisinin Faktoru= %d",faktor);
        break;
    case 10 :
        for(i=1;i<=10;i++){
            faktor=faktor*i;
        }
        printf("10 Sayisinin Faktoru= %d",faktor);
        break;
    default :
        printf("Hatali Secim Yaptiniz!");
        break;
}
    return 0;
}
