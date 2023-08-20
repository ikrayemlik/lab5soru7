#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bir iþaretçi kullanarak bir diziyi tersten yazdýran C dilinde bir program yazýn. */

int main() {
int dizi[100];
int *ilk;
int *ikinci;
int boyut,i,gecici;
	printf("dizi boyutu girin:  ");
	scanf("%d",&boyut);
	for(i=0;i<boyut;i++)
	{
		printf("%d. eleman :",i+1);
		scanf("%d",&dizi[i]);
	}
	ilk=ikinci=dizi;
	for(ilk=dizi,ikinci=dizi+boyut-1;ilk<ikinci;ilk++,ikinci--)
	{
     gecici=*ilk;
     *ilk=*ikinci;
     *ikinci=gecici;
	}
	for(i=0;i<boyut;i++)
	{
		printf("dizinin tersten cevrilmis %d. elemani: : %d\n",i+1,dizi[i]);
	}
	
	return 0;
}
