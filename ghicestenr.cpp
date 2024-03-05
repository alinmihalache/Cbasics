#include<stdio.h>
#include<stdlib.h>
int main()
{int nrghicit=26,a=0;
int interval=25,nr;
printf("incearca sa ghicesti nr cuprins intre 0 si 50!");
	printf("\nintrodu nr: ");
scanf("%d",&nr);
if(0>nr<50)
{
	while(nr!=nrghicit && a<24)
	{ a=a+1;
			printf("nu ai ghicit!! mai incearca");
			printf("\nintrodu nr: ");
			scanf("%d",&nr);		 		 
	}	
	if(a<24)
	{
	printf("Felicitari!Ai ghicit nr!");
}
else printf("ai depasit cele 25 de incercari");
} else printf("ai depasit intervalul");

return 0;
}
	

