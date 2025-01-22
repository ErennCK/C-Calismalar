#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sinav1,sinav2,sinav3,proje; 
	float ort;
	
	printf("Ilk sinav notunuzu giriniz: \n");
	scanf("%d",&sinav1);
	
	printf("Ikinci sinav notunuzu giriniz: \n");
	scanf("%d",&sinav2);
	
	printf("Ucuncu sinav notunuzu giriniz: \n");
	scanf("%d",&sinav3);
	
	printf("Proje notunuzu giriniz: \n");
	scanf("%d",&proje);
	
	ort=(sinav1+sinav2+sinav3+proje)/3;
	
	printf("\nOrtalamaniz: %f\t",ort);
	
	if(ort<50)
	{
		printf("Harf notunuz: FF");
	}
	else if(ort>=50 && ort<60)
		{
		printf("Harf notunuz: DD");
	}
	else if(ort>=60 && ort<70)
		{
		printf("Harf notunuz: CC");
	}
	else if(ort>=70 && ort<85)
		{
		printf("Harf notunuz: BB");
	}
	else if(ort>=85 && ort<=100)
		{
		printf("Harf notunuz: AA");
	}
	else
		{
		printf("Harf notunuz hesaplanamadi.");
	}
	
	
	
	
	return 0;
}
