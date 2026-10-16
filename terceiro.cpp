#include<stdio.h>

int main(){
	
	int num;
	
	printf("escreva um numero: ");
	scanf("%d",&num);
	
	if(num>=0){
		num=num/2;
		
		printf("a metade de seu numero e: %d", num);
	}
	else{
		num=num*num;
		
		printf("o quadrado de seu numero e: %d", num);
	}
}
