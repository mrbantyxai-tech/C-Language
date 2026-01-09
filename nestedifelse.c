#include<stdio.h>

void main(){
	
	int a,b,c,d;
	
	printf("Enter The Value of A :- ");
	scanf("%d",&a);
	
	printf("Enter The Value of B :- ");
	scanf("%d",&b);
	
	printf("Enter The Value of C :- ");
	scanf("%d",&c);
	
	printf("Enter The Value of D :- ");
	scanf("%d",&d);
	
	if(a>b){ // if a is grater
		if(a>c){
			if(a>d){
				printf("A is Grater :- %d",a);
			}else{
				printf("D is Grater :- %d",d);
			}
		}else{
			if(c>a){
				printf("C is Grater :- %d",c);
			}else{
				printf("D is Grater :- %d",d);
			}
		}
		
	}else{ // if b is grater
		if(b>c){
			if(b>d){
				printf("B is Grater :- %d",b);
			}else{
				printf("D is Grater :- %d",d);
			}
		}else{
			if(c>d){
				printf("C is Grater :- %d",c);
			}else{
				printf("D is Grater :- %d",d);
			}
		}
	}
}