// PR-6 Filament 

#include<stdio.h>

int main(){
	
	// Question 2:- Frequency Counter
	
	int i=0;
	char str1[100];
	
	printf("Enter any String :- ");
	scanf("%s",str1);


	
	char freq[256] = {0};                                       
	
	for(i=0;str1[i] != '\0';i++){
		freq[str1[i]]++;
	}
	printf("\nFrequency of each character:\n");
	for(i=0;i < 256 ;i++){
		if(freq[i] != 0){
			printf("%c => %d\n",i,freq[i]);
		}                
	}                       
			
   return 0;
}
	
	
	
	

