#include <stdio.h>



int main(){
	
	int filhos=0;
	float salario=0, media_salario=0, media_filhos=0, porcentagem_salario=0, maior_salario=0, porcentagem=0, contador_pessoas_100,contador_pessoas;
	
    do{
        printf("Digite o seu salario(para encerrar digite um salario negativo): ");
        scanf("%f", &salario);
        
        if(salario < 0){
        	break;
    	}
    	
        contador_pessoas++;
        media_salario = media_salario + salario;

        
		if(salario <= 100){
            contador_pessoas_100++;

        }

        if(salario>maior_salario){
            maior_salario = salario;
        }

        
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);
       

    }while(1);
    
    media_filhos = media_filhos + filhos;
    porcentagem = (contador_pessoas_100*100)/contador_pessoas;

    printf("A media do salario da populacao e: %.2f\n", media_salario/contador_pessoas);
    printf("A media do numero de filhos da populacao e: %.2f\n", media_filhos/contador_pessoas);
    printf("O maior salario e: %.2f\n", maior_salario);
    printf("A porcentagem de pessoas com salario ate 100 reais e de: %.1f%%\n", porcentagem);

    return 0;
}

