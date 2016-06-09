//WAP to find GCD using Efficient algorithm
#include<stdio.h>
int GCD(int n1,int n2){
	if (n1%n2==0){
		return n2;
	}
	else{
		
		return GCD(n2,n1%n2);
	}
}
int main(){
	int n1,n2;
	printf ("\nEnter a two number ");
	scanf ("%d %d",&n1,&n2);
	int value=GCD(n1,n2);
	printf ("\nThe GCD is %d",value);
}

