/*Ler um número inteiro de 3 casas decimais e imprimir se o algarismo da casa das centenas é par ou ímpar. Dica 1: para extrair apenas o dígito da casa da centena,
 faça uma divisão inteira por 100. Dica 2: para saber se um número é par ou ímpar, verifique o resto da divisão por 2, se for 0 é par senão é ímpar.*/
 
 #include<stdio.h>
 
 int main(){
 	
 	float num;
 	int real;
 	
 	printf("Escreva um numero com tres casas decimais: ");
 	scanf("%f",&num);
 	
 	real=(num*1000);
 	
 	if((real%2)==0){
 		printf("e par");}
 		
	else{
 	printf("e impar");}  
 	
	return 0;
 }
