#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
// Aqui vamos definir as variáveis para cada atributo da carta.
    char estado // Primeiro o tipo da variável, depois a variável em si.
    char codigoCarta[3]
    char nomeCidade[50]
    int população
    float area
    float pib
    int numeroPontosTuristicos
    
    // Cadastro das Cartas:
    // Aqui vamos dar definir as funções de cada variável. Também vamos definir como as informações vão aparecer no terminal.
    /* Essa parte costuma ser bem repetitiva, então o melhor a fazer é prestar bastante atenção para não acabar 
    * inserindo alguma coisa no lugar errado ou esquecendo coisas importantes para trás.
    */
   
    printf("Digite o Estado (Escolha uma letra entre 'A' e 'H'): \n"); //Essa função define como a solicitação vai aparecer para o usuário no terminal.
    scanf(" %c", &estado); //Essa função vai ler a resposta do usuário à solicitação feita.

    printf("Digite o código da carta (Uma letra acompanhada de dois números, ex.: 'A05'): \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a quantidade de pessoas que moram na cidade (Pode ser um número aproximado): \n");
    scanf("%d", &população);

    printf("Digite a área(O tamanho da cidade em km²): \n");
    scanf("%f", &area);

    printf("Digite o Pib (Produto interno bruto da cidade): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Aqui iremos definir como aparecerão as informações após o usuário digitar e enviar cada uma delas.
    
    printf("Estado: %c\n", estado); //Essa é a função que irá imprimir as informações no terminal.
    printf("Código da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
