#include <stdio.h>
#include <stdlib.h>
int main()
{
	int decimal,a;
	int b=0;
	int c=0;
	int list[10];
	printf("Enter decimal: ");
	scanf("%d",&decimal);
	while(decimal!=0){list[b]=decimal%10;decimal/=10;++b;++c;}
	for(a=c-1;a>=0;a--)
	{
	   if(list[a]==0) printf("0000 ");
       else if(list[a]==1) printf("0001 ");
	   else if(list[a]==2) printf("0010 ");
	   else if(list[a]==3) printf("0011 ");
	   else if(list[a]==4) printf("0100 ");
	   else if(list[a]==5) printf("0101 ");
	   else if(list[a]==6) printf("0110 ");
	   else if(list[a]==7) printf("0111 ");
	   else if(list[a]==8) printf("1000 ");
	   else if(list[a]==9) printf("1001 ");
	}
}
