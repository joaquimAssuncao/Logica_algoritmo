#include <iostream>
#include <string.h>
using namespace std;



void ex_1();
void ex_2();
void ex_3();
void ex_4();
void ex_5();
void ex_6();
void ex_7();

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int escolha;
     cout << ("_____________________________________________________\n\n");
     cout <<("     Digite o número da questão da LISTA 2  \n");
     cin >> escolha;

     switch (escolha){
     case 1:
        ex_1();
        break;
     case 2:
         ex_2();
        break;
     case 3:
         ex_3();
        break;
     case 4:
         ex_4();
        break;
     case 5:
          ex_5();
        break;
     case 6:
          ex_6();
       break;
     case 7:
          ex_7();
        break;
     }
     cout << ("\n_____________________________________________________\n\n");
}

void ex_1(){
    /* Construir um algoritmo que leia dois valores numéricos inteiros e efetue a adição. Caso o
resultado seja maior que 10, apresente-o.
    */
    int n1, n2, res;
    cout << ("Digite dois valores numéricos inteiros: ");
    cin >> (n1);
    cin >> (n2);
    res = n1+n2;

    if (res > 10){
        cout << (res);
    }
}

void ex_2(){
     /* Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado seja maior
que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor
ou igual a 20, este deverá ser apresentado subtraindo-se 5
    */
    int n1, n2, res;
    cout << ("Digite dois valores numéricos inteiros: ");
    cin >> (n1);
    cin >> (n2);
    res = n1+n2;

    if (res > 20){
        cout << (res+8);
    } else{
         cout << (res-5);
    }
}

void ex_3(){
     /* Entrar com uma idade e imprimir: “Maior de idade” caso 18 ou mais, ou “menor de idade” caso
menor de 18
    */
    int idade;
    cout << ("Digite uma idade: ");
    cin >> (idade);

    if (idade >= 18){
        cout << "Maior de idade";
    } else{
         cout << "Menor de idade";
    }
}


void ex_4(){
     /*  Entrar com um ano de nascimento e o ano atual. Imprimir a idade da pessoa. Não se esqueça de
verificar se o ano de nascimento é válido.
    */
    int ano_nasc, ano_at;
    cout << ("Digite o ano de nascimento: ");
    cin >> (ano_nasc);
    cout << ("Digite o ano atual: ");
    cin >> (ano_at);

    if (ano_nasc <= ano_at && ano_nasc > 1900){
        cout <<  "O indivíduo tem entre " << ano_at - ano_nasc -1  <<
         " e " << ano_at - ano_nasc << " anos.";
    } else{
        cout << "Data Invalida!";
    }
}

void ex_5(){
     /*  Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens: “Gaúcho”,
“Paulista”, “Carioca”.
    */
    string sigla;
    cout << ("Digite uma sigla: ");
    cin >> (sigla);

    if (sigla == "RS" || sigla == "rs"){
        cout <<  "Gaúcho";
    } else if (sigla == "SP" || sigla == "sp"){
        cout <<  "Paulista";
    } else if (sigla == "SC" || sigla == "sc"){
        cout <<  "Catarinense";
    }
}

void ex_6(){
     /*
     Entrar com dois nomes e imprimi-los em ordem alfabética. Use a função booleana
strcomp(n1,n2) para comparar os nomes.
    */
    string nome1, nome2;
    cout << ("Digite 2 nomes: ");
    cin >> (nome1);
    cin >> (nome2);

    if (nome1.compare(nome2) < 0){
        cout <<  "\n" << nome1 << "\n" << nome2;
    } else {
         cout << "\n" << nome2 << "\n" << nome1;
    }
}

void ex_7(){
     /*  Crie um algoritmo para escrever a tabuada do número 5.
A saída deve ter o seguinte formato: “1 x 5 = 5”
    */
   for (int i = 0; i<= 10; i++){
        cout << i << " x 5 = " << i*5 << "\n";
   }
}





