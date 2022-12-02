#include <stdio.h>


int main(){
	
	int filhos=0;
	float salario=0, mediaSalario=0, mediaFilhos=0, porcentagemSalarial=0, maiorSalario=0, porcentagem=0, contadorPessoas_100,contadorPessoas;
	
    do{
        printf("Digite o seu salario(para encerrar digite um salario negativo): ");
        scanf("%f", &salario);
        
    if(salario < 0){
        break;
    }
    	
       contadorPessoas++;
       mediaSalario = mediaSalario + salario;
 
	if(salario <= 100){
       contadorPessoas_100++;
        
	}
	if(salario>maiorSalario){
        maiorSalario = salario;
    }
	   
       printf("Digite o numero de filhos: ");
       scanf("%d", &filhos);

    }while(1);
    
    mediaFilhos = mediaFilhos + filhos;
    porcentagem = (contadorPessoas_100*100)/contadorPessoas;

    printf("A media do salario da populacao e: %.2f\n", mediaSalario/contadorPessoas);
    printf("A media do numero de filhos da populacao e: %.2f\n", mediaFilhos/contadorPessoas);
    printf("O maior salario e: %.2f\n", maiorSalario);
    printf("A porcentagem de pessoas com salario ate 100 reais e de: %.1f%%\n", porcentagem);

    return 0;
}
