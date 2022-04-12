#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int ano, diferenca;
	
	printf("Em que ano você nasceu? ");
	scanf("%d", &ano);
	
	diferenca = 2022 - ano;
	
if (diferenca>=16){
		printf("Você já pode votar!");
	}
	else {
		printf("Você ainda não pode votar!");
	}
	

}
