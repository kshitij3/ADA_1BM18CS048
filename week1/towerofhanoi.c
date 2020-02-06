#include<stdio.h>
#include<stdlib.h>
u
void twh(int,char,char,char);
int main()
{
		
			int n;char a='A',b='B',c='C';
			printf("Enter the Size : ");
			scanf("%d",&n);
			twh(n,a,c,b);
			return 0;
}
void twh(int n, char st, char des , char tem)
{
		if(n==1)
			{
			printf("\nMov Disc 1 from %c to %c",st,des);
			return;
			}
		twh(n-1,st,tem,des);
		printf("\nMov Disc %d from %c to %c",n,,des);
		twh(n-1,tem,des,st);
}			