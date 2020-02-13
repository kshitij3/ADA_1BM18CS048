#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int lsearch(int arr[],int key,int n)

{
 
for(int i=n;i>0;i++)
 
{

if(arr[i]==key)
 
return i;
 
else
 return(lsearch(arr,key,n-1));
 
}

 return -1;

}

int main()

{

clock_t start,end;

double timer;

int arr[50],key,n,i,res;

printf("\nEnter size");

scanf("%d",&n);

printf("\nEnter ele to be searched");

scanf("%d",&key);

printf("\nEnter ele in array");

for( i=0;i<n;i++)

{

scanf("%d",&arr[i]);

}

start=clock();

res=lsearch(arr,key,n);

end=clock();

timer=((double)(start-end)/CLOCKS_PER_SEC);

if(res==-1)

printf("\nElement not found");

else

printf("\nElement found at pos %d",res+1);

printf("\nTime taken is %f",timer);

return 0;

}
