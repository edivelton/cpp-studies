# Repositório de Estudos em C++

Este repositório documenta a minha jornada de domínio da linguagem C++. O método de estudo aplicado aqui é estritamente ativo: extração da teoria crua e direta através do método de **Checklist Dissecativo**, seguida imediatamente por repetição prática e resolução de problemas direto na IDE.

## Estrutura do Repositório

```text
CPP-STUDIES/
├── aula_1/
│   ├── aula1.cpp
│   └── aula1.md
├── aula_2/
│   ├── aula_2.cpp
│   └── aula_2.md
├── prompt.md
└── README.md
```

## O que aprendi em cada aula?

Aula 1: A Base de Tudo (Variáveis e Memória)
O que tem aqui: Nesta aula, o foco foi entender que variáveis não são mágicas, mas sim "apelidos" para endereços reais na memória RAM.

Explicação técnica: Aprendi como declarar variáveis de forma segura, os diferentes tipos de dados e o perigo do "lixo de memória". Também usei o `sizeof` para medir o tamanho de cada dado e o operador `&` para descobrir o endereço físico exato de onde a informação mora no hardware.

Aula 2: O Poder do C++ (Ponteiros e Referências)
O que tem aqui: Aqui o estudo avançou para a manipulação direta e indireta da memória, que é o grande diferencial do C++.

Explicação técnica: Explico a diferença fundamental entre Ponteiros (variáveis que guardam endereços) e Referências (apelidos fixos para variáveis existentes). Abordo a desreferenciação para alterar valores à distância, o uso do `nullptr` para evitar travamentos e as regras de segurança ao combinar ponteiros com o modificador `const`.

---
