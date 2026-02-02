// Lab Work #9.1

void main(){
	
	// Question 3:- Write a Program to convert the given string in toggle case without using any string function.
	
	int i;
	
	char str[12];
	
	printf("Enter any string :- ");
	scanf("%[^\n]",&str);
	
	for(i=0;str[i] != '\0';i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}else{
			if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
	}
	
}
printf("Toggle Case String :- %s",str);
}