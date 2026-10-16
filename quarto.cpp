#include<stdio.h>

int main(){
	
	int a;

	
	printf("escreva o primeiro numero: ");
	scanf("%d", &a);
	
	if(a%3==0){
		printf("seu numero e multiplo de tres");
	}
	else{
		printf("seu numero nao e multiplo de tres");
	}
	
	return 0;
}
