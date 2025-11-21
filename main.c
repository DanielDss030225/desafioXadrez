#include <stdio.h>
//funcaoPrincipal Main()
int main() {

     //aqui o código imprimi o título para o movimento da Torre.
    printf("Movimento da Torre:\n");

   //método "for" mais simples, valor da variavel e toda a condicional dentro do () int = inteiro, i = variável, "1" valor declarado para a varíavel, o ponto vírgula represante a finalização, utilizado como instrumento de separação, <= pergunta se a variavel declarada com valor inteiro = 1 é menor ou igual a 5, o método i++ tem a função de acrescentar +1 no valor da variavel i. 
    /// o código dentro de {} imprime a palavra "Direita" o \n utilizado para quebra de linha, criando uma coluna. 
    //// neste método de repetição, enquanto a variavel "i" tiver valor menor ou igual a 5, será impresso a palavra "Direita" no terminal. 
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    //imprimir mais um contro barra n apenas para saltar um espaço entre as impressões "visual".
    printf("\n");
    //aqui tentei fazer algo diferente, ao invés de usar apenas o número 5 abaixo, como no método for, criei uma Var com valor de "5" ela será utilizada como marcação, ao invés do número. 
    int casasBispo = 5; 
/// aqui criei mais uma váriavel com valor de "1".
    int i = 1;
//// aqui será impresso o título, no teminal, assim como no método for. OBS: quando não há uma estrutura de repetição o valor só é impresso uma vez.
    printf("Movimento do Bispo:\n");
///// método while, semelhante ao método for, porém a condicional é mais simples e separada da formula de incremento a variavel I. 
//método inicia-se com o nome declarado: while, do português = enquanto, dentro do () adicionei a condicional. sabe-se que o valor da variavel i é igual a 1, e da variavel casasBispo é igual a 5, portanto a condição para repedição é... Se i for menor ou igual a 5 fazer... 
// dentro de {} temos o código de execução, em toda repetição imprimir no teminal as palavras "Cima, Direita" e mais uma vez usar contro barra n para montar a coluna. 
    while (i <= casasBispo) {
        printf("Cima, Direita\n");

        //adiciona mais 1 a var i
        i++;
    }

    //imprimir mais um contro barra n apenas para saltar um espaço entre as impressões "visual".
    printf("\n");

//aqui é o ultimo e na minha opinião mais complexo método de repetição em C, fiz a mesma coisa do método for, "visual", criei uma variavel com nome: contador, atribuir o valor de 1 (inicial), mais uma vez imprimi o cabeçalho. 
/// do = fazer, o que está dentro deste trecho inicial independe de condição, ele será executado pelo menos uma vez. O que acontece nesse código é o seguinte... O código diz: Imprima a palavra "Esquerda" no terminal e adicione mais 1 ao valor da variavel i, após o código entre no while, que diz: enquanto contador for menor ou igual a 8, execute... o código vai entrar no loop até que i tenha o valor de 9. 
    int contador = 1;
    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda \n");
        contador++;
    } while (contador <= 8);
    return 0;
}


//código concluído sem repetições infinitas. 
/// aluno - Daniel de Souza Silva
//// React <3 Node.js <3 Java <3