#include<stdio.h>
#include<locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	double precototal, macas;
	
	printf("Quantas ma��s est�o sendo compradas? ");
	scanf("%lf", &macas);
	
	if (macas<12){
		precototal = macas*0.30;
		printf("O valor da sua compra � %lf", precototal);
	}
	
	if (macas>=12){
		precototal = macas*0.25;
		printf("O valor da sua compra � %lf", precototal);
	}
}
