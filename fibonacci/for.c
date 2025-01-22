#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

int sayi1,sayi2,sayi3,i;

printf("Ilk sayiyi giriniz: ");
scanf("%d",&sayi1);

printf("Ikinci sayiyi giriniz: ");
scanf("%d",&sayi2);

printf("%d\n%d\n",sayi1,sayi2);

for(i=1;i<=10;i+=1)
{
    	sayi3=sayi1+sayi2;
    	sayi1=sayi2;
    	sayi2=sayi3;

	printf("%d\n",sayi3);
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
