#include <stdio.h>


int gcd(int a, int b){
	if(a==0){
		return b;
	}
	
	else if(b==0)
		return a;
	
		else if (a==b)
			return a;
		
	else if(a>b)
		return gcd(a-b,b);
		
	else return gcd(a, b-a);
	
	
}


int main(){
int a,b;
	a=24;
	b=10;
	int c = gcd(a,b);
	printf("%d\n", c);

}
