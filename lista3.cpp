#include <iostream>
#include <string.h>
#include <math.h>
#include <locale>
#include <functional>
using namespace std;


// Declarando as funções
void ex_1();
void ex_2();
void ex_3();
void ex_4();
void ex_5();
void ex_6();
void ex_7();
void ex_8();
void ex_9();
void ex_10();
void ex_11();
void ex_12();
void ex_13();
void ex_14();
void ex_15();

// ... main vem primeiro e chama a função que resolve um exercício
int main ()
{
    setlocale(LC_ALL, "portuguese");
    int escolha;
     cout << ("_____________________________________________________\n\n");
     cout <<("     Digite o número da questão da LISTA 3  \n");
     cin >> escolha;

     // Array of function pointers
    function<void()> exercises[] = {ex_1, ex_2, ex_3, ex_4, ex_5, ex_6, ex_7, ex_8, ex_9, ex_10, ex_11, ex_12,
                                    ex_13,ex_14,ex_15};

    if (escolha >= 1 && escolha <= 15) {
        exercises[escolha - 1]();
    } else {
        cout << "Opção inválida\n";
    }

     cout << ("\n_____________________________________________________\n\n");
}

void ex_1(){
    /*  Dificuldade: 3
    Entrar com 20 profissões e imprimi-las caso não comecem com a letra ‘A’. Considere a String um
vetor de caracteres.
    */
    string profissoes[20];
    int i;

    for (i = 0; i < 20; i++){
        cout << "Digite uma profissão: [" << i << "]";
        cin >> (profissoes[i]);

        if (profissoes[i][0] != 'A' && profissoes[i][0] != 'a'){
            cout << profissoes[i] << "\n";
        }else{
             cout << "Não vou imprimir. Começa com A \n";
        }
    }

}

void ex_2(){
     /* Dificuldade: 2
     Entrar com 15 números e imprimir a raiz quadrada de cada número.
    */
    int i;
    float num[15];

    for (i = 0; i < 15; i++){
        cout << "Digite um número: [" << i << "]";
        cin >> (num[i]);

        cout << sqrt(num[i]) << "\n";
    }
}

void ex_3(){
     /* Dificuldade: 2
     Entrar com 10 números e imprimir a metade de cada número.

    */
    int i;
    float num[10];

    for (i = 0; i < 10; i++){
        cout << "Digite um número: [" << i << "]";
        cin >> (num[i]);

        cout << (num[i]/2) << "\n";
    }
}


void ex_4(){
     /*  Dificuldade: 3
     Crie um algoritmo que leia um número que deve ser o limite superior de um intervalo. Imprima
todos os números ímpares menos do que este número. Observe a formatação. Exemplo de saída
para a entrada 13: 1 3 5 7 9 11.
    */
     int i, num;
     cout << "Digite um número: ";
     cin >> num;

    for (i = 1; i < num; i++){
        if(i % 2 == 1){
            cout << " " << i ;
        }
    }
    cout << ".";
}

void ex_5(){
     /*  Dificuldade: 3
     Crie um algoritmo que servirá para imprimir uma quantidade de números pares para serem
impressos (a entrada mínima é 2). Exemplo de saída para a entrada 4: 2 4 6 8.
    */
     int i, num;
     cout << "Digite um número: ";
     cin >> num;

    for (i = 1; i <= num*2; i++){
        if(i % 2 == 0){
            cout << " " << i ;
        }
    }
    cout << ".";
}

void ex_6(){
     /* Dificuldade: 3
     Crie um algoritmo para imprimir a tabuada do 3, 4 e 5. A saída deve ter o seguinte formato:
“3 x 1 = 3”
....
“5 x 10 = 50”
    */
   for (int i = 3; i<= 5; i++){
        for (int j = 0; j<= 10; j++){
            cout << i << " x " << j << " = " << j*i << "\n";
        }
   }
}

void ex_7(){
     /*  Dificuldade: 5
     Em uma loteria esportiva há 3 colunas que representam vitória, empate, e derrota. Crie um
algoritmo que leia uma matriz de 20 por 3 e imprima qual coluna é a mais marcada e quantas
marcações houve nesta coluna.
    */
   int apostas[20][3] = {}, op, vit = 0, emp = 0, der = 0;
   int i;
   for (i = 0; i< 20; i++){
        cout << "Jogo [" << i+1  << "]. Digite 1 (vitória), 2 (empate) ou 3 (derrota).";
        cin  >> op;
        apostas[i][op-1] = 1;
   }
   for (i = 0 ; i< 20; i++){
        vit += apostas[i][0];
        emp += apostas[i][1];
        der += apostas[i][2];
   }
   if (vit > emp && vit > der){
        cout << "Vitória! = " << vit;
   }else if (vit < emp && emp > der){
        cout << "Empate! = " <<emp;
   }else{
        cout <<"Derrota! = " << der;
   }

}


void ex_8(){
     /* Dificuldade: 2
        Escreva um algoritmo que compute a soma de 1 até 100. Exemplo, a soma de 1 até 5 é 15.
    */
   int i, soma;
   for (i = 1; i<= 100; i++){
        soma += i;
   }
   cout << soma;
}


void ex_9(){
     /* Dificuldade: 3
         Crie um algoritmo que leia um vetor de 10 números inteiros informados pelo usuário e imprima
o menor e o maior número do vetor.
    */
   int i, vet[10], maior = 0, menor = 9999;
   for (i = 1; i< 10; i++){
        cout << "Digite um númeto inteiro [" << i << "/10]: ";
        cin >> vet[i];
        if (vet[i] > maior){
            maior = vet[i];
        }
        if (vet[i] < menor){
            menor = vet[i];
        }
   }
   cout << "maior: " << maior << "  menor: " << menor;
}


void ex_10(){
     /* Dificuldade: 5
        Crie um algoritmo que leia um vetor de 10 números inteiros informados pelo usuário
e imprima os dois menores números contidos no vetor.

    */
   int i, vet[10], menor1 = 9999, menor2 = 9999;
   for (i = 1; i< 10; i++){
        cout << "Digite um númeto inteiro [" << i << "/10]: ";
        cin >> vet[i];

        if (vet[i] < menor1){
            menor2 = menor1;
            menor1 = vet[i];
        }else if (vet[i] < menor2 && vet[i] != menor1) {
            menor2 = vet[i];
        }
   }
   cout << "menor1: " << menor1 << "  menor2: " << menor2;
}


void ex_11(){
     /* Dificuldade: 3
        Crie um algoritmo que leia um número e imprima se ele é ou não um número primo.
Número primo é um número que só pode ser dividido por 1 e por ele mesmo sem
deixar restos na divisão.

    */
    int num;
    bool isPrime = true;

    cout << "Digite um número inteiro positivo: ";
    cin >> num;

    // Verifica se o número é menor ou igual a 1
    if (num <= 1) {
        isPrime = false;
    } else {
        // Verifica divisibilidade do número por todos os inteiros de 2 até a raiz quadrada do número
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " é um número primo." << endl;
    } else {
        cout << num << " não é um número primo." << endl;
    }
}


void ex_12(){
     /* Dificuldade: 3
        Se pegarmos os números múltiplos de 7 ou 11 menores de 100 e somar eles, iremos obter o
número 1153. Agora encontre a soma dos múltiplos de 7 ou 11 menores de 10000.

    */
    int limite = 10000;
    int soma = 0;

    for (int i = 1; i < limite; i++) {
        if (i % 7 == 0 || i % 11 == 0) {
            soma += i;
        }
    }

    cout << "A soma dos múltiplos de 7 ou 11 menores que 10.000 é: " << soma << endl;

}


void ex_13(){
     /* Dificuldade: 3
        Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
centímetros por ano. Construir um algoritmo que calcule e imprima quantos anos serão
necessários para que Juca seja maior que Chico.

    */
     int chico_altura = 150;  // altura inicial de Chico em centímetros
    int juca_altura = 110;   // altura inicial de Juca em centímetros
    int anos = 0;           // número de anos inicial

    while (juca_altura <= chico_altura) {
        chico_altura += 2;  // Chico cresce 2 centímetros por ano
        juca_altura += 3;   // Juca cresce 3 centímetros por ano
        anos++;
    }

    cout << "Serão necessários " << anos << " anos para que Juca seja maior que Chico." <<  endl;

}


void ex_14(){
     /* Dificuldade: 2
         Criar um algoritmo que deixe entrar com 10 números positivos e imprima raiz quadrada de cada
número. Para cada entrada de dados deverá haver um trecho de proteção para que um número
negativo não seja aceito.

    */
    int num;

   for (int i; i<10; i++){
         cout << "Digite um número para obter sua raiz: ";
        cin >> num;
        if (num >= 0){
            cout << "A raiz de " << num << " é " <<  endl;
        }

   }
}


void ex_15(){
     /* Dificuldade: 3
          Entrar com a idade de várias pessoas e imprimir: total de pessoas com menos de 21 anos m total
de pessoas com mais de 50 anos.

    */
    int idade, menor21 = 0, maior50 = 0;
    bool sair = false;

   while (!sair){
         cout << "Digite a idade de uma pessoa: ";
        cin >> idade;
        if (idade < 21){
            menor21 += 1;
        }else if(idade > 50){
            maior50 += 1;
        }
        cout << "Deseja sair? (1)sim - (0)não";
        cin >> sair;
   }
    cout << "O total de menores de 21 é: "<< menor21 << ".\n O total de maiores de 50 é " << maior50 <<  endl;
}
