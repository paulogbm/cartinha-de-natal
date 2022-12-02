#include <stdio.h>

main(){
	int num, soma=0, cont=0, media;

	
		printf ("Digite um numero inteiro. Digite zero para encerrar a execucao: ");
		scanf ("%d", &num);
			if (num!=0){
				do {
					if (num%2==0){
						cont++;
						soma=soma+num;
					}
						printf ("Digite um numero inteiro. Digite zero para encerrar a execucao: ");
						scanf ("%d", &num);
					} while (num!=0);
						media=soma/cont;
						printf ("A media e %d", media);
					}
return 0;
}
