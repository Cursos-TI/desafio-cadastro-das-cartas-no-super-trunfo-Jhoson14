#include <stdio.h>

main(){
    //parametros para cada cidade/estado
    //incluido nestes parametros numero de: habitantes,pontos turisticos e o PIB
    //numero da carta contendo inicial do estado e numero entre 1-8 referente ao total decartas disponivel no jogo
    //Area da cidade em km²
    char Código [3]; // da carta
    char Estado[50];
    char Cidade[50];
    int Pop; //População-Não deveria ser float ou algo similar? Resultado será limitado a numeros inteiros, numeros nas casas de milhares e milhões não serão apresentados corretamente
    float Área;
    float PIB;
    int pontos;//turisticos
    //código da cidade, nome, população, área, PIB, número de pontos turísticos
    
    printf("Desafio Super Trunfo - Estados \n");
    printf("Vamos registrar as cartas para nosso jogo?\n");
  
    // fgets para nomes compostos
    //Carta 01
    printf ("Dados da Carta 01 \n");
    printf ("A qual o Estado pertence a carta? \n");
    fgets(Estado, sizeof(Estado), stdin);

    printf ("Qual nome da cidade? \n");
    fgets(Cidade, sizeof(Cidade), stdin);

    printf ("Há quantos Habitantes nesta cidade? \n");
    scanf ("%d", &Pop);

    printf ("Quantos pontos turisticos há na cidade? \n);
        scanf ("%d", &pontos);

//Retorno com dados das cartas

    printf ("Carta A01 \n");
    printf("Estado:%s",Estado);
    printf("Cidade:%s",Cidade);
    printf("Habitantes: %d\n",Pop); //0x para gerar casas decimais e hexadecimais?

    printf ("Carta 02 \n");
    printf("Estado:%s",Estado);
    printf("Cidade:%s",Cidade);
    printf("Habitantes:%d \n",Pop);
    //retorno para testes, mover para o final após pronto



    return 0;

}
