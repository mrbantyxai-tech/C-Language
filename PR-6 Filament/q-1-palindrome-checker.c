// PR-6 Filament 

#include<stdio.h>

int main(){
	
	// Question 1:- Palindrome Checker 
	
	int i=0,j=0,pal = 1;
	char str1[100];
	
	printf("Enter any String :- ");
	scanf("%s",str1);
	

	while(str1[j] != '\0'){
		j++;
	}
	j = j - 1;
		
		while(i < j){
		if(str1[i] != str1[j]){
			pal = 0;
			break;
		}
		i++;
		j--;
	}
	
	if(pal == 1){
		printf("\nThe String is Palindrome\n");
	}else{
		printf("\nThe String is Not Palindrome\n");
	}
	
	return 0;
}
	
	
	
	

