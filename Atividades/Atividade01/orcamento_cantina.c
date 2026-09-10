/* 
Algoritmo

Constantes:

VALOR_REFEICAO = 12.50
VALOR_CAFE = 4.00

Variáveis: 

quantidade_refeicoes: inteiro
quantidade_cafes: inteiro
gasto_refeicoes: real
gasto_cafes: real
gasto_total: real
saldo_disponivel: real
saldo_restante: real

Início

    //Entrada de dados para quantidade de refeições e cafés consumidos

    Escreva("Digite a quantidade de refeições consumidas: ")
    Leia(quantidade_refeicoes)

    Escreva("Digite a quantidade de cafés consumidos: ")
    Leia(quantidade_cafes)

    //Cálculo dos gastos
    gasto_refeicoes <- quantidade_refeicoes * VALOR_REFEICAO
    gasto_cafes <- quantidade_cafes * VALOR_CAFE
    gasto_total <- gasto_refeicoes + gasto_cafes

    //Entrada de dados para o saldo disponível
    Escreva("Digite o saldo disponível: ")
    Leia(saldo_disponivel)

    //Cálculo do saldo restante
    saldo_restante <- saldo_disponivel - gasto_total

    //Cálculo do percentual utilizado
    percentual_utilizado <- (gasto_total / saldo_disponivel) * 100

    //Saída dos resultados
    Escreva("Gasto total com refeições: R$", gasto_refeicoes)
    Escreva("Gasto total com cafés: R$", gasto_cafes)
    Escreva("Gasto total: R$", gasto_total)
    Escreva("Percentual utilizado: ", percentual_utilizado, "%")
    Escreva("Saldo restante: R$", saldo_restante)
    (saldo_restante < 0) && Escreva("Aviso: Seu saldo ficou negativo!")
Fim

*/

#include <stdio.h>

#define VALOR_REFEICAO 12.50
#define VALOR_CAFE 4.00

int main() {
    int quantidade_refeicoes, quantidade_cafes;
    float gasto_refeicoes, gasto_cafes, gasto_total;
    float saldo_disponivel, saldo_restante;
    float percentual_utilizado;

    //Entrada de dados para quantidade de refeições e cafés consumidos
    printf("Digite a quantidade de refeicoes consumidas: ");
    scanf("%d", &quantidade_refeicoes);

    printf("Digite a quantidade de cafes consumidos: ");
    scanf("%d", &quantidade_cafes);

    //Entrada de dados para o saldo disponível
    printf("Digite o saldo disponivel no cartao: ");
    scanf("%f", &saldo_disponivel);

    //Cálculo dos gastos totais 

    gasto_refeicoes = quantidade_refeicoes * VALOR_REFEICAO;
    gasto_cafes = quantidade_cafes * VALOR_CAFE;
    gasto_total = gasto_refeicoes + gasto_cafes;

    //Cálculo do saldo restante 
    saldo_restante = saldo_disponivel - gasto_total;

     //Cálculo do percentual utilizado
    percentual_utilizado = (gasto_total / saldo_disponivel) * 100;

    //Saída de dados
    printf("Gasto total com refeicoes : R$ %.2f\n", gasto_refeicoes);
    printf("Gasto total com cafes : R$ %.2f\n", gasto_cafes);
    printf("Gasto total : R$ %.2f\n", gasto_total);
    printf("Percentual utilizado : %.2f%%\n", percentual_utilizado);
    printf("Saldo restante : R$ %.2f\n", saldo_restante);
    (void)((saldo_restante < 0) && printf("Aviso: Seu saldo ficou negativo!"));

    return 0;
}