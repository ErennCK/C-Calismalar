#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

int i,j,taban;

printf("Taban degerini giriniz: ");
scanf("%d",&taban);



for(i=1;i<=taban;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}

printf("\n");

}


















	return 0;
}
