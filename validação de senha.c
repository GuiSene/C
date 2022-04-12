#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int senha;
	
	printf("Insira sua senha: ");
	scanf("%d", &senha);
	
	if (senha!=1234){
		printf("ACESSO NEGADO");
	}
	else {
		printf("ACESSO PERMITIDO");
	}
}
