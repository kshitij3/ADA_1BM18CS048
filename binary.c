#include<stdio.h>
#include<stdlib.h>
int m;

int check(int arr[],int n,int k)
{
int h=n-1,l=0,res;
while(l<=h)
{
m=(l+h)/2;
if(arr[m]==k)
{res=1;
return res;}
else if(arr[m]>k)
h=m-1;
else 
l=m+1;
}
res=-1;
return res;
}
int main()
{
int arr[50],key,n,a,res;
printf("\nEnter size");
scanf("%d",&n);
printf("\nEnter ele to be searched");
scanf("%d",&key);
printf("\nEnter ele in array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

res=check(arr,n,key);
if(res==1)
{
while(res=1)
{
res=check(arr,m,key);
}














