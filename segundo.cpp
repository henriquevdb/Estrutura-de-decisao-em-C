#include<stdio.h>

int main(){
	
	int a , b;
	float soma;
	
	printf("escreva o primeiro numero: ");
	scanf("%d", &a);
	printf("escreva o segundo numero: ");
	scanf("%d", &b);
	
	soma=(a+b);
	
	if(soma>20){
		soma=(soma-5);
		
		printf("o seu numero e: %f", soma);
	}
	else{
		printf("o seu numero e: %f", soma);
	}
	
	return 0;
}
