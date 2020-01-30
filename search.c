#include<stdio.h>
#include<stdlib.h>

int check(int arr[],int n,int k)
{
int h=n-1,l=0,m,res;
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
void main()
{
int arr[100],t,n,k,res[20];
printf("\nEnter no of Testcases");
scanf("%d",&t);
for(int i=0;i<t;i++)
{
printf("\nEnter size of array and element to be searched");
scanf("%d",&n);
scanf("%d",&k);
printf("\nEnter elements of Array");
for(int j=0;j<n;j++)
scanf("%d",&arr[j]);
res[i]=check(arr,n,k);

}
for(int i=0;i<t;i++)
printf("\n%d",res[i]);
}
