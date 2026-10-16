#include<stdio.h>

int main(){
	
	char estado;
	
	printf("Escreva o seu Estado civil sendo |  (S=Solteiro, C=Casado, D=Divorciado e V=Viuvo)\n");
	scanf("%s",&estado);
	
	switch(estado){;
		case 'S':
			printf("Voce e Solteiro");
			break; 	
		case 'C':
			printf("Voce e Casado");
			break; 
		case 'D':
			printf("Voce e Divorciado");
			break; 
		case 'V':
			printf("Voce e Viuvo");
			break; 			
		default:	
			printf("Opcao invalida! Reinicie");	

	}
}
