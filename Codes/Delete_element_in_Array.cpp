//WAP a program to delete the element in an array.
#include<stdio.h>
#include<conio.h>
int main()
{	
    int m,n,i,j,k=0,count=0;
    printf("Input size of an array \n");
    scanf("%d",&n);
    int array1[n];
    printf("enter the element for array1 : \n");
    for(i=0;i<n;i++){
		scanf("%d",&array1[i]);
	}
	printf ("\nEnter a number to delete from array\n");
	scanf ("%d",&m);
	for(i=0;i<n;i++){
		if (m!=array1[i]){
			count=count+1;
		}
	}
	int array3[count];
	for(i=0;i<n;i++){
		for (j=k;j==k;j++){
			if (m!=array1[i]){
				array3[j]=array1[i];
			}
		}
	if (m!=array1[i]){
	k++;
		}
	}
	printf("\n the new array is \n");
	for(i=0;i<count;i++){
		printf(" %d",array3[i]);
	}
}
