#include <stdio.h>

int main(){

	int x,n=10,numPares=0,numImpares=0,i;
		

	
	for(i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if(x%2==0){

			numPares++;
		}else
			numImpares++;
	}
	
	printf("%d numeros pares.\n", numPares);
	printf("%d numeros impares.\n", numImpares);
	
	return (0);
}
