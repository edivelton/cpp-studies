// Aula 01 variáveis e endereços
//
// conceito de variável: nome que batiza uma determinada posição da memória.
// Toda variável tem um tipo associado. O tipo define tanto o tamanho (quantidade de bytes) como as operações que serão feitos nessa posição de memória
// ex: int -> números inteiros 
// ex: double -> números reais 
//
//
//Sintaxe relacionada com variáveis em geral:
//. nome_var: refere-se ao conteúdo que está guardado na variável
//. &nome_var: refere-se ao endereço da variável
//. tipo_var nome_var: cria uma variável chamada nome_var do tipo_var sem definir um valor inicial específico para a variável.
//. tipo_var nome_var(val): cria uma variável denominada nome_var do tipo tipo_var com o valor inicial val. OBS: isso equivale a tipo_var nome_var = val
//


#include <iostream>

using namespace std;

int main(){
    //Variável criada sem inicialização: valor aletório (lixo)
    int i;
    // Inteiro com número maior de bytes e valor inicial 37:
    long long int iii(37);
    // Mesmo tipo (inteiro longo) e mesmo valor inicial da função iii
    auto jjj = iii;

    // Deve imprimir numero aletório, 37 e 37

    cout << " i=" << i << " iii=" << iii << " jjj= " << jjj << endl;

    //Na maioria dos compiladores deve imprimir 4, 4, 8, 8 e 8 que
    // correspondem ao numero de bytes de "int" e "long long int"

    cout << "Tamanho(i)= " << sizeof(i) << " Tamanho(int)= " << sizeof(int)
         << " Tamanho(iii)= " << sizeof(iii) << " Tamanho(jjj)= " << sizeof(jjj)
         << " Tamanho(long long int)= " << sizeof(long long int) << endl;
    // Deve imprimir 3 numeros variáveis, expressos em notação hexadecimal:
    cout << " endereco(i)= " << & i
         << " endereco(iii)= " << &iii << " endereco(jjj)= " << &jjj << endl;
         
    return 0;
}