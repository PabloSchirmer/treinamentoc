#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//gcc main.c -o main.out && ./main.out    (código de compilação)
//fgets(nome, sizeof(nome), stdin);  (ler digitação com espaços.)

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicioslide();
void desafio();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exercicio10();
void exercicio11();


int main() {
    setlocale(LC_ALL, "Portuguese");
    exercicio10();
    return 0;
}


void exercicio1(){
//Peça ao usuário para digitar seu nome e idade e, em seguida, imprima uma mensagem formatada com esses dados.
    char nome[10];
    int idade;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome á %s. Sua idade é %d.", nome, idade); 
}


void exercicio2(){
/*Crie um programa que converta uma temperatura em graus Celsius para Fahrenheit.
Peça ao usuário para inserir a temperatura em Celsius e imprima a temperatura equivalente em Fahrenheit.
*/ 
    float celsius, fahrenheit;
    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("Essa temperatura convertida em Fahrenheit é %.1f.", fahrenheit);
}


void exercicio3(){
/*Escreva um programa que calcule e imprima a área de um triângulo. Peça ao usuário
para inserir a base e a altura do triângulo.     base * altura / 2*/
    int base, altura;
    float area;
    printf("Insira a base do triângulo: ");
    scanf("%d", &base);
    printf("Insira a altura do triângulo: ");
    scanf("%d", &altura);
    area = base * altura / 2;
    printf("A área do triângulo é %.1f.", area);
}

void exercicio4(){
/*Crie um programa que leia um número inteiro e imprima seu quadrado e cubo*/
    int num, quadrado, cubo;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    quadrado = num * num;
    cubo = (num * num) * num;
    printf("O quadrado do número é %d e o cubo é %d", quadrado, cubo);
} 


void exercicio5(){
    /*Escreva um programa que determine se um número digitado pelo usuário é par ou
ímpar.*/
    short num;
    printf("Digite um número inteiro: ");
    scanf("%hd", &num);
    if(num % 2 == 0){
        printf("O número %d é par.", num);
    }else{
        printf("O número %d não é par.", num);
    }
}


void exercicioslide(){
    /*Crie um programa em C que solicita ao usuário:
- Um nome;
- Uma idade;
- Um número de telefone*/
    char nome[15];
    short idade, ddd;
    long telefone;
    printf("Escreva seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua idade: ");
    scanf("%hd", &idade);
    printf("Insira seu número de telefone (sem ddd): ");
    scanf("%ld", &telefone);
    printf("Digite seu ddd: ");
    scanf("%hd", &ddd);
    printf("Seu nome é %s, você tem %hd anos e seu telefone é (%hd) %ld.", nome, idade, ddd, telefone);
}


void desafio(){
    /*Temos uma população de n bovinos. A cada ano, n/3 novos bovinos nascem, e n/4 bovinos morrem. 
 Quantos anos levam para se atingir uma certa população de bovinos informada pelo usuário sabendo 
que começamos com 10 bovinos?*/
    float bovinos = 10, anos = 0, qtdbovinos, morrem, nascem; 
    printf("Informe a quantidade desejada de bovinos: ");
    scanf("%f", &qtdbovinos);
    while(bovinos < qtdbovinos){
        anos ++;
        nascem = bovinos / 3;
        morrem = bovinos / 4;
        bovinos = bovinos + nascem - morrem;
    } printf("A população de bovinos levaria %.0f anos para ter %.0f bovinos .", anos, qtdbovinos);
}  


void exercicio6(){
    /*Crie um programa que determine se um ano fornecido pelo usuário é bissexto ou
não.
*/
    int ano, bissexto;
    printf("Insira um ano para checar se é bissexto: ");
    scanf("%d", &ano);
    bissexto = ano % 4;
    if(bissexto == 0){
        printf("O ano %d é bissexto.", ano);
    }else{
        printf("O ano %d é bissexto.", ano);
    }
}


void exercicio7(){
    /*Faça um programa que peça a nota de um aluno em uma prova e verifique se ele foi
aprovado (nota maior ou igual a 6) ou reprovado (nota menor que 6).
*/
    float nota;
    printf("Insira a nota do aluno: ");
    scanf("%f", &nota);
    if(nota >= 6){
        printf("O aluno foi aprovado.");
    }else{
        printf("O aluno foi reprovado.");
    }
}

void exercicio8(){
    /*Escreva um programa que classifique um dado número inteiro como positivo,
negativo ou zero.*/
    /*Preciso entender como o sistema compara o valor com 0 e como identificar valores negativos.*/
    float numero;
    printf("Insira um número inteiro: ");
    scanf("%f", &numero);
    if(numero > 0){
        printf("O número %.0f é positivo.", numero);
    }else if(numero < 0){
        printf("O número %.0f é negativo.", numero);
    }else{
        printf("O número %.0f é nulo.", numero);
    }
}

void exercicio9(){
    /*Crie um programa que imprima a tabuada de multiplicação de um número fornecido
pelo usuário.*/
    int numero, counter = 1, multi;
    printf("Digite um número: ");
    scanf("%d", &numero);
    while(counter <= 10){
        multi = numero * counter;
        printf("%d X %d = %d\n", numero, counter, multi);
        counter = counter + 1;
    }
}

void exercicio10(){
    /*Escreva um programa que calcule e imprima o fatorial de um número inteiro positivo
dado pelo usuário.*/
    int numero, counter, fatorial = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    counter = numero;
    while(counter >= 1){
        fatorial = fatorial * counter;
        counter = counter - 1;
    }
    printf("O fatorial é %d", fatorial);
}

void exercicio11(){
    /*Implemente um programa que peça ao usuário para adivinhar um número inteiro
secreto entre 1 e 100. Forneça dicas de "maior" ou "menor" até que o usuário acerte*/
    int secreto = 67, tentativas = 1, chute;
    printf("Você tem 10 chances para adivinhar o número secreto! O núemro secreto é um número inteiro entre 1 e 100.\n");
        while(tentativas <= 12){
            printf("tentativa %d: ", tentativas);
            scanf("%d", &chute);
            tentativas = tentativas +1;
            if (tentativas == 11){
                printf("Você perdeu! O número secreto era %d", secreto);
                tentativas = 50;
            }else if(chute == secreto){
                printf("Parabéns! Você acertou o número secreto.");
                tentativas = 50;
            }else if(chute < secreto){
                printf("O número secreto é maior! Tente novamente.\n");
            }else if(chute > secreto){
                printf("O número secreto é menor! Tente novamente.\n");
            }
        }
}

void exercicio12(){
    /* Faça um programa que exiba a sequência de Fibonacci até um número específico
fornecido pelo usuário. A sequência começa com 0 e 1, e cada termo subsequente é
a soma dos dois anteriores.*/
    
}
