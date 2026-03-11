#include <iostream>


using namespace std;

//VARIÁVEIS SÃO NOMES QUE DAMOS A POSIÇÕES DE MEMÓRIA

int main(){
    int i(7);
    int* pti = &i; //guardando o endereço de i
    cout << i << endl; //imprime 7
    cout << &i << endl; //Mostra o endereço de i
    cout << pti <<endl;  //imprime o endereço de i que pti guarda
    cout << &pti << endl; // Mostrao o endereço de pti na memória 

    *pti = 111; // Armazena 111 na posição que pti aponta (desreferenciação)
    cout << i << endl; // imprime 111
    cout << *pti << endl; // acessa a posição de memória de i e imprime seu valor


// TREINANDO MAIS DESREFERENCIAÇÃO:

//Declarando e iniciando variáveis inteiras
int a(8), b(9);

// Declarando e  inicializando um ponteiro para inteiros 
int* ptr(nullptr);

//Impressão de valores e endereços das variáveis:
cout << "\nValores iniciais:" << endl;
cout << "a= " << a << "\t\t b= " << b << "\t\t ptr= " << ptr << endl;
cout << " end(a)= " << &a << " end(b)= " << &b <<" end(ptr)= " << &ptr << endl;

// Fazendo o ponteiro apontar para b:
ptr = &b; // ptr recebe o endereço de b

//armazenando inteiro na posição para onde ptr apont, ou seja, 
// no inteiro que corresponde a desreferenciação de ptr

*ptr = 111;

// Impressão  de valores e endereços de variáveis:

cout << "\nVALORES APÓS PRIMEIRA ATRIBUIÇÃO:" << endl;
cout << "a= " << a << "\t\t b= " << b << "\t\t ptr= " << ptr << endl;
cout << " end(a)= " << &a << " end(b)= " << &b <<" end(ptr)= " << &ptr << endl;

// Incrementando o ponteiro "n" bytes a frente,
// ou seja a quantidad de bytes que o ponteiro incrementa é sempre um 
// multiplo da quantidade de bytes daquele tipo de dado

ptr++; // ou ptr = ptr + 1;
// Armazena 222 na nova posição para onde ptr aponta ( um salto de 4 bytes visto que se trata de um inteiro):
*ptr = 222;

cout << "\nVALORES APÓS PRIMEIRA ATRIBUIÇÃO:" << endl;
cout << "a= " << a << "\t\t b= " << b << "\t\t ptr= " << ptr << endl;
cout << " end(a)= " << &a << " end(b)= " << &b <<" end(ptr)= " << &ptr << endl;
cout << "val(ptr+1)= " << *ptr+1 << endl;

//Parei na parte de referências aula 2

}