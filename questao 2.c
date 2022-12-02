#include <stdio.h>

int main(){

	int x,valorNegativo=0,i;

	for(i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &x);

	if(x<0){
		valorNegativo++;
	}
    }
	printf("%d numeros negativos.", valorNegativo);

	return (0);
}
