#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int check(int arr[],int k,int l,int h)
{
while(l<=h)
{
int m=(l+h)/2;
if(arr[m]==k)
return m;
else if(arr[m]>k)
return check(arr,k,l,m-1);
else
return check(arr,k,m+1,h);
}
return -1;


}

int main()
{
clock_t start,end;
double timer;
int arr[50],key,n,a,res;
printf("\nEnter size");
scanf("%d",&n);
int h=n-1,l=0;
printf("\nEnter ele to be searched");
scanf("%d",&key);
printf("\nEnter ele in array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
start=clock();
res=check(arr,key,l,h);
end=clock();
timer=((double)(start-end)/CLOCKS_PER_SEC);
if(res==-1)
printf("\nElement not found");
else
printf("\nElement found at pos %d",res+1);
printf("\nTime taken is %f",timer);
return 0;
}
