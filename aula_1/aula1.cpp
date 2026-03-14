/*
===========================================================================
  DESAFIO PRÁTICO: MONITORAMENTO DE HARDWARE BÁSICO
===========================================================================

  Cenário: Você está escrevendo um código de baixo nível para monitorar 
  os dados de um circuito elétrico básico.

  OBJETIVOS:

  1. A Criação das variáveis
     - Crie uma variável CONSTANTE para armazenar uma capacitância fixa 
       de 10 (representando 10 microfarads). Garanta que não possa ser alterada.
     - Crie uma variável usando AUTO para armazenar a voltagem do 
       sistema (ex: 220).
     - Crie uma variável tradicional para armazenar a leitura de um 
       sensor (int ou long long). Inicialize-a com o valor 0 para 
       evitar lixo de memória.

  2. A Inspeção dos Dados (Impressão no terminal)
     - Bloco 1 (Conteúdo): Imprima o valor atual das três variáveis.
     - Bloco 2 (Tamanho): Use o sizeof() para imprimir quantos bytes 
       cada variável está ocupando na memória.
     - Bloco 3 (Endereço): Imprima o endereço hexadecimal exato (usando &) 
       de onde essas três variáveis foram alocadas fisicamente na RAM.

===========================================================================
  ESCREVA SEU CÓDIGO ABAIXO DESTA LINHA
===========================================================================
*/

#include <iostream>

using namespace std;

int main() {
    
    //criando as variáveis
    const int microfarads = 10;
    auto tensao = 220;
    long long leitura_sensor = 0;

    // imprimindo seus valores
    cout << microfarads << " microfarads" << endl;
    cout << tensao << " Volts" << endl;
    cout << "Leitura: " << leitura_sensor << endl;

    // verificando quantos bytes cada uma ocupa
    cout << "A variável microfarads ocupa: " << sizeof(microfarads) << " bytes" << endl;
    cout << "A variável tensão ocupa: " << sizeof(tensao) << " bytes" << endl;
    cout << "A variável leitura_sensor ocupa: " << sizeof(leitura_sensor) << " bytes" << endl;    
    
    // verificando onde foram alocadas na memória 
    cout << "Variável microfarads foi alocada na posição " << &microfarads << " da memória" << endl;
    cout << "Variável tensão foi alocada na posição " << &tensao << " da memória" << endl;
    cout << "Variável leitura_sensor foi alocada na posição " << &leitura_sensor << " da memória" << endl;


    return 0;
}