# My_push_swap

Implementação do projeto `push_swap`, desenvolvido em C como parte da formação da 42 Rio.

O objetivo do projeto é ordenar uma pilha de números inteiros usando um conjunto limitado de operações e buscando reduzir a quantidade de movimentos gerados.

## Objetivo

Criar um programa que recebe números inteiros como argumento, valida a entrada e imprime a sequência de operações necessárias para ordenar a pilha `a` em ordem crescente.

O projeto trabalha algoritmos de ordenação, estruturas de dados e otimização de movimentos em um contexto com regras bem restritas.

## Tecnologias e conceitos utilizados

- C
- Makefile
- Listas duplamente encadeadas
- Parsing e validação de argumentos
- Algoritmos de ordenação
- Indexação de valores
- Operações sobre pilhas
- Gerenciamento manual de memória

## Funcionamento geral

O programa trabalha com duas pilhas, `a` e `b`, e utiliza operações como:

- `sa`, `sb`, `ss` — troca de elementos;
- `pa`, `pb` — envio de elementos entre pilhas;
- `ra`, `rb`, `rr` — rotação;
- `rra`, `rrb`, `rrr` — rotação reversa.

A entrada pode ser passada como múltiplos argumentos ou como uma única string com números separados por espaço.

## Como compilar e executar

```sh
git clone https://github.com/vinionix/My_push_swap.git
cd My_push_swap
make
./push_swap 3 2 1
```

Também é possível passar os valores como uma string:

```sh
./push_swap "3 2 1"
```

Alvos disponíveis:

```sh
make
make clean
make fclean
make re
```

## Status atual

Projeto implementado com validação de entrada, estrutura de pilhas em lista encadeada, operações principais e seleção de algoritmo de ordenação.

O repositório não informa testes automatizados ou resultado de avaliação. A documentação foi escrita com base nos arquivos disponíveis no projeto.

## Evolução do projeto

- Criação da estrutura de lista para representar as pilhas.
- Implementação do parsing e validação dos argumentos.
- Implementação das operações obrigatórias do `push_swap`.
- Inclusão de indexação para auxiliar a ordenação.
- Implementação da lógica de escolha de algoritmo.
- Fase atual: projeto documentado para consulta e portfólio.

## Aprendizados principais

- Manipulação de listas encadeadas em C.
- Validação robusta de entrada por linha de comando.
- Organização de algoritmos com restrições de operações.
- Otimização de movimentos em estruturas de pilha.
- Gerenciamento de memória e prevenção de vazamentos.

## Autor

Desenvolvido por [vinionix](https://github.com/vinionix) durante a formação na 42 Rio.
