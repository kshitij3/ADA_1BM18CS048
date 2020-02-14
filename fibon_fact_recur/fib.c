#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return(fib(n-1)+fib(n-2));
}
void main()
{
int n;
printf("\n Enter value of n:");
scanf("%d",&n);
printf("\n%d th element in fibonacci series is %d",n,fib(n));
return;
}