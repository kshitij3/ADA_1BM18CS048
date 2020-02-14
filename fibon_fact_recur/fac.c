#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
 if(n==1)
 return 1;
else
return n*factorial(n-1);
}
void main()
{
int n,res;
printf("\nEnter value n:");
scanf("%d",&n);
printf("\nFactorial of %d is %d",n,factorial(n));
return;
}