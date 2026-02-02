// PR-5 Assortment

#include<stdio.h>
void main(){
	
	// Question 4:- Sum of Elements in Row & Columns of 2D Array.

	int i,row,col,j,r,c;
	int rowsum = 0,colsum = 0;
	
	printf("Enter The Array's row Size :- ");
	scanf("%d",&row);
	
	printf("Enter The Array's columns Size :- ");
	scanf("%d",&col);
	
	
	int array[10][10];
	printf("\nEnter array's Elements:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nEnter row Number :- ");
	scanf("%d",&r);
	
	printf("\nElements of row %d :- ",r);
	for(j=0;j<col;j++){
		printf("%d ",array[r][j]);
		rowsum = rowsum + array[r][j];
	}
	printf("\n The Sum of row %d = %d\n", r, rowsum);
	
	printf("\nEnter column Number :- ");
	scanf("%d",&c);
	
	printf("\nElements of Column %d :- ",c);
	for(i=0;i<row;i++){
		printf("%d ",array[i][c]);
		colsum = colsum + array[i][c];
	}
	
	printf("\n The Sum of Column %d = %d\n", c, colsum);
}