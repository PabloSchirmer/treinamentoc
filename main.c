#include <stdio.h>
#include <locale.h>

//gcc main.c -o main.out && ./main.out    (código de compilação)
//fgets(nome, sizeof(nome), stdin);  (ler digitação com espaços.)

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicioslide();
void desafio();


int main() {
    setlocale(LC_ALL, "Portuguese");
    exercicio2();
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

