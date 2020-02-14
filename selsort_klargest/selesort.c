#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionsort(int arr[],int n)
{
int temp,min;
for(int i=0;i<n-1;i++)
{
 min=i;
  for(int j=i+1;j<n;j++)
   {
     if(arr[j]<arr[min])
     {
       min=j;
      } 
  }   
      temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
     }
  }
}
}
void main()
{
clock_t start,end;
double timer;
int n,arr[100];
 printf("\nEnter size of array");
scanf("%d",&n);
printf("\nEnter array ele");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
start=clock();
selectionsort(arr,n);
end=clock();
timer=(double)(start-end)/CLOCKS_PER_SEC;
printf("\nSorted array is:\n");
for(int i=0;i<n;i++)
printf("%d  ",arr[i] );
printf("\nTime taken is:%f",timer);
return;
}



