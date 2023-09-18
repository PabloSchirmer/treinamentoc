#include <stdio.h>
#include <locale.h>

//gcc main.c -o main.out && ./main.out    (c�digo de compila��o)
//fgets(nome, sizeof(nome), stdin);  (ler digita��o com espa�os.)

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
//Pe�a ao usu�rio para digitar seu nome e idade e, em seguida, imprima uma mensagem formatada com esses dados.
    char nome[10];
    int idade;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome � %s. Sua idade � %d.", nome, idade); 
}


void exercicio2(){
/*Crie um programa que converta uma temperatura em graus Celsius para Fahrenheit.
Pe�a ao usu�rio para inserir a temperatura em Celsius e imprima a temperatura equivalente em Fahrenheit.
*/ 
    float celsius, fahrenheit;
    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("Essa temperatura convertida em Fahrenheit � %.1f.", fahrenheit);
}


void exercicio3(){
/*Escreva um programa que calcule e imprima a �rea de um tri�ngulo. Pe�a ao usu�rio
para inserir a base e a altura do tri�ngulo.     base * altura / 2*/
    int base, altura;
    float area;
    printf("Insira a base do tri�ngulo: ");
    scanf("%d", &base);
    printf("Insira a altura do tri�ngulo: ");
    scanf("%d", &altura);
    area = base * altura / 2;
    printf("A �rea do tri�ngulo � %.1f.", area);
}

void exercicio4(){
/*Crie um programa que leia um n�mero inteiro e imprima seu quadrado e cubo*/
    int num, quadrado, cubo;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    quadrado = num * num;
    cubo = (num * num) * num;
    printf("O quadrado do n�mero � %d e o cubo � %d", quadrado, cubo);
} 


void exercicio5(){
    /*Escreva um programa que determine se um n�mero digitado pelo usu�rio � par ou
�mpar.*/
    short num;
    printf("Digite um n�mero inteiro: ");
    scanf("%hd", &num);
    if(num % 2 == 0){
        printf("O n�mero %d � par.", num);
    }else{
        printf("O n�mero %d n�o � par.", num);
    }
}


void exercicioslide(){
    /*Crie um programa em C que solicita ao usu�rio:
- Um nome;
- Uma idade;
- Um n�mero de telefone*/
    char nome[15];
    short idade, ddd;
    long telefone;
    printf("Escreva seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua idade: ");
    scanf("%hd", &idade);
    printf("Insira seu n�mero de telefone (sem ddd): ");
    scanf("%ld", &telefone);
    printf("Digite seu ddd: ");
    scanf("%hd", &ddd);
    printf("Seu nome � %s, voc� tem %hd anos e seu telefone � (%hd) %ld.", nome, idade, ddd, telefone);
}


void desafio(){
    /*Temos uma popula��o de n bovinos. A cada ano, n/3 novos bovinos nascem, e n/4 bovinos morrem. 
 Quantos anos levam para se atingir uma certa popula��o de bovinos informada pelo usu�rio sabendo 
que come�amos com 10 bovinos?*/
    float bovinos = 10, anos = 0, qtdbovinos, morrem, nascem; 
    printf("Informe a quantidade desejada de bovinos: ");
    scanf("%f", &qtdbovinos);
    while(bovinos < qtdbovinos){
        anos ++;
        nascem = bovinos / 3;
        morrem = bovinos / 4;
        bovinos = bovinos + nascem - morrem;
    } printf("A popula��o de bovinos levaria %.0f anos para ter %.0f bovinos .", anos, qtdbovinos);
}  

