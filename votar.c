#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int ano, diferenca;
	
	printf("Em que ano voc� nasceu? ");
	scanf("%d", &ano);
	
	diferenca = 2022 - ano;
	
if (diferenca>=16){
		printf("Voc� j� pode votar!");
	}
	else {
		printf("Voc� ainda n�o pode votar!");
	}
	

}
