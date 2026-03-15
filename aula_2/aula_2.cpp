/*
===========================================================================
  DESAFIO PRÁTICO: MANIPULAÇÃO DIRETA DE MEMÓRIA 
  (PONTEIROS E REFERÊNCIAS)
===========================================================================

  Cenário: Você está construindo o núcleo de um sistema de banco de dados
  onde precisa acessar dados originais diretamente por segurança (referências)
  e navegar pela memória fisicamente (ponteiros).

  OBJETIVOS:

  PARTE 1: Ponteiros Básicos, Desreferenciação e nullptr
  1. Crie uma variável inteira chamada 'bancoDados' inicializada com 100.
  2. Crie um ponteiro chamado 'ptrBanco' que aponte para 'bancoDados'.
  3. Usando APENAS O PONTEIRO (desreferenciação), altere o valor de 
     'bancoDados' para 500. Imprima o novo valor da variável para confirmar.
  4. Crie um ponteiro de inteiro chamado 'ptrSeguro' e o inicialize de 
     forma segura para não ser um "ponteiro selvagem" (aponte para o nada).

  PARTE 2: Ponteiro Genérico e Aritmética
  5. Crie um ponteiro genérico (void) chamado 'ptrGenerico' e faça ele 
     guardar o endereço de 'bancoDados'.
  6. Imprima o endereço atual de 'ptrBanco'. Em seguida, some 1 a ele 
     (ptrBanco = ptrBanco + 1) e imprima o novo endereço. 
     (Você deve notar um salto de 4 bytes no hexadecimal impresso).

  PARTE 3: O Engessamento (Referências)
  7. Crie uma variável double chamada 'temperatura' inicializada com 36.5.
  8. Crie uma referência (apelido) chamada 'refTemp' vinculada a 'temperatura'.
  9. Altere o valor para 40.0 usando APENAS o apelido ('refTemp').
  10. Imprima o endereço de memória de 'temperatura' e o endereço de 'refTemp'
      para provar visualmente que são exatamente a mesma "gaveta".

// ==========================================
// PARTE 4: O Domínio do "const" (Sopa de Letrinhas)
// ==========================================

// Variáveis base para o teste
int nivelBateria = 100;
int novoNivel = 80;
const int ID_SENSOR = 999;

// DESAFIO 4.1: Protegendo o Dado (Ponteiro para constante)
// Crie um ponteiro chamado 'ptrLeitura' que aponte para 'nivelBateria',
// mas que PROÍBA a alteração de 'nivelBateria' através dele.
// Em seguida, faça esse mesmo ponteiro apontar para 'ID_SENSOR' (isso deve ser permitido).


// DESAFIO 4.2: Protegendo a Bússola (Ponteiro constante)
// Crie um ponteiro constante chamado 'ptrFixo' que aponte para 'nivelBateria'.
// Altere o valor de 'nivelBateria' para 50 usando a desreferenciação desse ponteiro.
// (Tentar fazer ptrFixo apontar para 'novoNivel' daria erro de compilação).


// DESAFIO 4.3: Segurança Máxima (Ponteiro constante para constante)
// Crie um ponteiro chamado 'ptrBlindado' que aponte para 'ID_SENSOR'.
// Ele não pode mudar de alvo e não pode alterar o valor do sensor.
===========================================================================
  ESCREVA SEU CÓDIGO ABAIXO DESTA LINHA
===========================================================================
*/

#include <iostream>

using namespace std;

int main() {

// Parte 1:

    int bancoDados = 100;
    int* ptrBanco = &bancoDados;

    *ptrBanco = 500;
    int* ptrSeguro = nullptr;

    cout << "novo valor: " << bancoDados << endl;

// PARTE 2: 

void* ptrGenerico = &bancoDados;
cout << "endereço atual guardado por ptrBanco: " << ptrBanco << endl;

ptrBanco = ptrBanco + 1;
cout << "endereço novo guardado por ptrBanco: " << ptrBanco << endl;


// Parte 3:

double temperatura = 36.5;
double& refTemp = temperatura;

refTemp = 40;

cout << "Endereço de memória: " << &temperatura << endl;
cout << "Endereço de memória: " << &refTemp << endl;

// Parte 4:

int nivelBateria = 100;
int novoNivel = 80;
const int ID_SENSOR = 999;

//4.1:
const int* ptrLeitura = &nivelBateria;
ptrLeitura = &ID_SENSOR;
//*ptrLeitura = 20 ==> Não pode

// 4.2:
int* const ptrFixo = &nivelBateria;
*ptrFixo = 50;
// ptrFixo = &novoNivel; ===> NÃO PERMITIDO

//4.3:
const int* const ptrBlindado = &ID_SENSOR;

// ptrBlindado = &nivelBateria; ==> NÃO PERMITIDO
//*ptrBlindado = 80; ==> NÃO PERMITIDO


    return 0;
}