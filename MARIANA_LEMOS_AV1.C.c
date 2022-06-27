#include <stdio.h>

int main(){

    int PratosSujos = 7;
    int PratosLavados = 0;
    int pratos = 0;
    int total = 0;

        printf("Pia Suja Simulator. BORA LAVAR?: \n");

        while (PratosSujos > 0){

                printf("Digite um numero positivo para indicar quantos pratos voce quer lavar, ou um numero negativo para indicar novos pratos sujos: \n");
                scanf("%i", &pratos);
                if(pratos > PratosSujos){
                    printf("Nao eh possivel lavar %d pratos porque a quantidade de pratos sujos eh %d. Tente novamente: \n", pratos, PratosSujos);
                }
                else{
                    total++;
                    if(pratos > 0){
                    PratosLavados = pratos;
                    PratosSujos = PratosSujos - pratos;
                    }
                    else{
                    PratosSujos = PratosSujos - pratos;
                }
                    printf("Apos a refeicao %d, ha %d pratos sujos:\n", total, PratosSujos);
                    }
                }

        if (PratosSujos == 0){
            printf("Parabens! Sua pia esta limpa depois de %d refeicoes, com %d pratos lavados", total, PratosLavados);
        }

return 0;

}
