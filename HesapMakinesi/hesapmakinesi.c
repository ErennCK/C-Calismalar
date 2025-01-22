#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float sayi1,sayi2,top,cik,carp,bol;

	
	int a;
	
	printf("******Hesap Makinesi*****\n\n");
	
	printf("Bir sayi giriniz: ");
	scanf("%f",&sayi1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%f",&sayi2);
	
	printf("Toplama:1\nCikarma:2\nCarpma:3\nBolme:4\n");
	printf("Yapacaginiz islemi seciniz: ");
    scanf("%d",&a);
    
    if (a == 1)
    {
    	printf("Sonuc: %f",sayi1+sayi2);
	}
	
	else if (a == 2)
	{
		printf("Sonuc: %f",sayi1-sayi2);
	}
	
	else if (a == 3)
	{
		printf("Sonuc: %f",sayi1*sayi2);
	}
	
	else if (a == 4)
	{
		printf("Sonuc: %f",sayi1/sayi2);
	}
	
	else
	{
		printf("Hicbir islem secmediniz.");
	}
	
	
	
	return 0;
}
