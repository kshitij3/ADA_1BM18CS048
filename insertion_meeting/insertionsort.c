#include<stdio.h>

#include<stdlib.h>

void main()

{

int arr[30],size,key;

printf("\nEnter array size");

scanf("%d",&size);

printf("\nEnter array element");

for(int i=0;i<size;i++)


{

 scanf("%d",&arr[i]);

}

for(int i=1;i<size;i++)

{

key=arr[i];

int j=i-1;

while(j>=0&&arr[j]>key)

{

arr[j+1]=arr[j];

j--;

}

arr[j+1]=key;

}

printf("\nSorted array is...");

for(int i=0;i<size;i++)

{

printf("%d  ",arr[i]);

}

return;

}