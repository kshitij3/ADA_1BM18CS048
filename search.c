ANALYSIS AND DESIGN OF ALGORITHMS LAB

Week 0-Assignment

Problem:

Given an sorted array arr[] of N integers and a number K is given. The task is to check if the element K is present in the array or not.

Input:

First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and the number K separated by space. Next line contains N elements.

Output:

For each testcase, if the element is present in the array print "1" (without quotes), else print "-1" (without quotes).

Example:

Input:

2

5 6

1 2 3 4 6

5 2

1 3 4 5 6

Output:

1

-1

Explanation:

Testcase 1: Since, 6 is present in the array at index 4 (0-based indexing), so output is 1.

Testcase 2: Since, 2 is not present in the array, so output is -1.
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
