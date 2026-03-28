#include <stdio.h>

int main() {
    int escolha = 0;
    float dol, real, taxa = 5.67, cd, cr;
    
    printf("Calculadora de cambio Real - Dolar e Dolar - Real\n");
    printf("Seguintes acoes disponiveis:\n");

        while(escolha != 3) {
            printf("1- fazer conversao real - dolar\n");
            printf("2- fazer conversao dolar - real\n");
            printf("3- sair\n");
            printf("O que deseja fazer?: ");
            scanf("%d", &escolha);

                switch (escolha)
                {
                case 1:
                    printf("insira o valor em real:\n");
                    scanf("%f", &real);

                    cd = real / taxa;
                    printf("valor convertido: US$%0.2f\n", cd);
                    break;
                
                case 2:
                    printf("insira o valor em dolar:\n");
                    scanf("%f", &dol);

                    cr = dol * taxa;
                    printf("valor convertido: R$%0.2f\n", cr);

                default:
                printf("opcao nao disponivel, por gentileza escolha entre 1, 2 ou 3:\n");
                    break;
                }
        }
        
    return 0;
}
