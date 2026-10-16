#include<stdio.h>

int main(){
	
	int quantidade;
	float preco;
	
	printf("Escreva a quantida de papel desejado: ");
	scanf("%d",&quantidade);
	
	if(quantidade<100){
		preco=quantidade*0.25;
		
		printf("o total fica %.2fR$, sendo cada folha 0.25R$", preco);
	}
	else{
		preco=quantidade*0.20;
		
		printf("o total fica %.2fR$, sendo cada folha 0.20R$", preco);
	}
}
