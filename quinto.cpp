#include<stdio.h>

int main(){
	
	int num;
	
	printf("Escreva seu numero: ");
	scanf("%d",&num);
	
	if((num%3)==0){
		printf("o numero %d e divisivel por tres\n",num);
		
	}
	else{ 
		printf("o numero %d nao e divisel por tres\n",num);
	}
		
		if((num%7)==0){
		printf("o numero %d e divisivel por sete\n",num);
	}
	else{ 
		printf("o numero %d nao e divisel por sete\n",num);
	}
	
	
	return 0;
}
