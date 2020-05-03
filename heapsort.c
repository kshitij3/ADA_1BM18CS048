
#include<stdio.h>

#include<time.h>

void heapify(int a[], int n);
void heapsort(int a[], int n);
using namespace std;
int main()
{
	srand(time(0));	
	int n,i;
	clock_t time;
	printf("Enter the number of elements\n");
	scanf(%d,&n);
	int a[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		a[i] = rand()%1000;
		printf("%d ",a[i]);
	}
	cout<<endl;
	time = clock();
	heapsort(a,n);
	time = clock() - time;
	printf("\nThe time required for heap sort is %d %d %d \n ",fixed,setprecision(7),(float)time/CLOCKS_PER_SEC);	
	printf("\nThe sorted array is\n");
	for(i=0;i<n;i++)
		printf("%d \n",a[i]);
	 	
	return 0;
}
void heapify(int a[], int n)
{
	int i,p,c,item;;
	for(i=((n-1)/2);i>=0;i--)
	{
		p = i;
		item = a[p];
		c = 2*p+1;
		while(c<n)
		{
			if((c+1)<n)
			{
				if(a[c]<a[c+1])
					c = c+1;
			}
			if(item<a[c])
			{
				a[p] = a[c];
				p = c;
				c = 2*p+1;
			}
			else
				break;
		}
		a[p] = item;
	}
}
void heapsort(int a[], int n)
{
	int i;
	heapify(a,n);
	for(i=n-1;i>=0;i--)
	{
		swap(a[0],a[i]);
		heapify(a,i);
	}
}

/*Output:
Enter the number of elements
10
Enter the elements
644 216 833 863 186 713 569 784 343 448 
The time required for heap sort is 0.0000030
The sorted array is
186 216 343 448 569 644 713 784 833 863 
*/
