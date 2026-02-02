// PR-5 Assortment

#include<stdio.h>
void main(){
	
	// Question 1:- Negative Elements in 1D Array.
	
	int n,i;
	
	printf("Enter The Array's Size :- ");
	scanf("%d",&n);
	
	int array[n];
	printf("\nEnter array's Elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&array[i]);

		}
	
	printf("\nNegative elements from an array : ");
	for(i=0l;i<n;i++){
		if(array[i] < 0){
		printf("%d, ",array[i]);
		}
	}
}