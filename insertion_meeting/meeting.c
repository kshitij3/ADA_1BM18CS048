#include<stdio.h>
#include<stdlib.h>
void selectionsort(int s[],int f[],int n)
{
int temp,temp1,min;
for(int i=0;i<n-1;i++)
{
 min=i;
  for(int j=i+1;j<n;j++)
   {
     if(s[j]<s[min])
     {
       min=j;
      } 
  }   
      temp=s[i];
       s[i]=s[min];
       s[min]=temp;
      temp1=f[i];
 f[i]=f[min];
f[min]=temp1;
     }
  }
}
}
void main()
{
int n,s[100],f[100],flag=1,k=0,count[100],check[50],max=0,pos=0;
printf("\nEnter no of meeting");
scanf("%d",&n);
printf("\nEnter starting time and finishing time");
for(int i=0;i<n;i++)
scanf("%d%d",&s[i],&f[i]);
sort(s,f,n);


for(int i=0;i<n;i++)
{
flag=1;
count[i]=0;
for(int a=0;a<k;a++)
{
if(i==check[a])
flag=0;
}
if(flag==1)
{
int j=0;
while(j<n)
{
if(f[j]<=s[j+1])
{
count[i]++;
check[k++]=j+1;
j++;

}
else
{
j++;
}
}
}
}

for(int i=0;i<n;i++)
{
if(max<count[i])
max=count[i];pos=i;
}
printf("\nMaximum accomodation is %d",max);

return;
}