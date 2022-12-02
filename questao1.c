#include <stdio.h>


int main() {
    int senha, senhaValida = 123456, erro=0;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != senhaValida && erro!=2){
        printf("Senha invalida!\n\nDigite sua senha: ");
        scanf("%d", &senha);
        erro++;
    		}
    		if(senha==senhaValida){
    			printf("Acesso permitido");
			}else{
				printf("Cartao bloqueado");
			}

return 0;
}
