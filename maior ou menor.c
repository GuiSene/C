#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo n�mero: ");
	scanf("%d", &num2);
	
	if (num1>num2){
		printf("O maior valor � %d", num1);
	}
	else {
		printf("O maior valor � %d", num2);
	}
	

}
