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
    int Pontos;//turisticos
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

    printf ("Há quantos Habitantes nesta cidade? \n"); //população
    scanf ("%d", &Pop);

    printf ("Qual a área da cidade? (Em km²) \n");
    scanf ("%d", &Pontos);

    printf ("Qual o valor do Produto Interno Bruto (PIB) da cidade? ");
    scanf ("%F", &PIB);

    printf ("Quantos pontos turisticos há na cidade? \n");
    scanf ("%d", &Pontos);
   
    printf ("Carta 01 \n");//Retorno com dados digitado carta 1
    printf("Estado:%s",Estado);
    printf("Cidade:%s",Cidade);
    printf("Habitantes: %d\n",Pop); //gerado em numeros inteiros, devo adicionar milhares?
    printf ("PIB: %d", &PIB);
    printf ("Pontos Turisticos: %d", &Pontos);


    printf("Estado:%s",Estado); //retono dos dados digitados carta 2
    printf("Cidade:%s",Cidade);
    printf("Habitantes: %d\n",Pop); //gerado em numeros inteiros, devo adicionar milhares?
    printf ("PIB: %s \n", &PIB);
    printf ("Pontos Turisticos: %s \n", &Pontos);
    //retorno para testes, mover para o final após pronto



    return 0;

}
