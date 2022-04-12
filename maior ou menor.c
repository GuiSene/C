#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	
	if (num1>num2){
		printf("O maior valor é %d", num1);
	}
	else {
		printf("O maior valor é %d", num2);
	}
	

}
