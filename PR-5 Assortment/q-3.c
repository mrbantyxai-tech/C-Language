// PR-5 Assortment

#include<stdio.h>
void main(){
	
	// Question 3:- Transpose of 2D Array.

	int i,rc,j;

	printf("Enter The Array's row & column Size :- ");
	scanf("%d",&rc);
	
	
	int array[rc][rc];
	printf("\nEnter array's Elements:\n");
	for(i=0;i<rc;i++){
		for(j=0;j<rc;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\n The Without Transpose Matrix of an array :\n");
	
	for(i=0;i<rc;i++){
		for(j=0;j<rc;j++){
			printf("%d ",array[i][j]);
		}printf("\n");
	}
	
	printf("\n The Transpose Matrix of an array :\n");
	
		for(j=0;j<rc;j++){
		for(i=0;i<rc;i++){
			printf("%d ",array[i][j]);
		}printf("\n");
	}
}