// PR-5 Assortment

#include<stdio.h>
void main(){
	
	// Question 2:- Largest Elements in 2D Array.
	
	int i,r,c,j;
	
	printf("Enter The Array's row Size :- ");
	scanf("%d",&r);
	
	printf("Enter The Array's columns Size :- ");
	scanf("%d",&c);
	
	int array[r][c];
	printf("\nEnter array's Elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	int larg = array[0][0];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(array[i][j] > larg){
			larg = array[i][j];
			}
		}
	}printf("The Largest Element is :- %d",larg);
}