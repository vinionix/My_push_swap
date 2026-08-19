# My_push_swap

Implementação do projeto `push_swap` em C, desenvolvido durante a formação da 42 Rio.

O objetivo é ordenar números inteiros usando apenas um conjunto limitado de operações sobre duas pilhas. O resultado não é simplesmente uma pilha ordenada: o programa precisa **imprimir a sequência de movimentos** que leva do estado inicial ao estado final.

## O problema

O programa recebe uma sequência de inteiros, valida a entrada e constrói a pilha `a`. A pilha `b` começa vazia.

A solução só pode transformar o estado através das operações permitidas:

- `sa`, `sb`, `ss` — swap;
- `pa`, `pb` — push entre pilhas;
- `ra`, `rb`, `rr` — rotate;
- `rra`, `rrb`, `rrr` — reverse rotate.

Isso transforma um problema comum de ordenação em um problema de **planejamento sob restrições**.

## Pipeline

```text
Argumentos
   ↓
Parsing
   ↓
Validação
   ↓
Construção das pilhas
   ↓
Indexação / normalização
   ↓
Escolha da estratégia
   ↓
Operações permitidas
   ↓
Pilha A ordenada
```

## Tecnologias e conceitos

- C
- Makefile
- listas duplamente encadeadas
- parsing e validação
- limites de inteiro
- detecção de duplicados
- algoritmos de ordenação
- indexação de valores
- operações sobre pilhas
- otimização de movimentos
- gerenciamento manual de memória

## Entrada

A implementação aceita números como argumentos separados ou dentro de uma string, conforme o parsing do projeto.

```bash
./push_swap 3 2 1
```

ou:

```bash
./push_swap "3 2 1"
```

## O que precisa ser validado

Antes de ordenar, a aplicação precisa impedir estados inválidos:

- token não numérico;
- valor fora do intervalo de `int`;
- número duplicado;
- entrada vazia ou malformada;
- falha de alocação.

Um erro durante parsing também exige cleanup correto do que já tiver sido alocado.

## Corretude vs eficiência

Uma sequência pode ordenar corretamente e ainda ser ruim se usar movimentos demais. Por isso, o projeto possui duas dimensões de qualidade:

1. **corretude:** a pilha termina ordenada;
2. **eficiência:** a quantidade de operações geradas permanece razoável.

Esse detalhe torna `push_swap` mais interessante do que apenas implementar um algoritmo de ordenação convencional.

## Como compilar

```bash
git clone https://github.com/vinionix/My_push_swap.git
cd My_push_swap
make
```

Alvos:

```bash
make
make clean
make fclean
make re
```

## Casos de teste

- entrada já ordenada;
- entrada em ordem reversa;
- poucos elementos;
- permutações aleatórias;
- valores negativos;
- `INT_MIN` e `INT_MAX`;
- duplicados;
- entradas inválidas;
- centenas de execuções aleatórias com verificação automática do resultado.

Para avaliar bem o projeto, é útil registrar também a quantidade de operações para diferentes tamanhos de entrada.

## Status

O repositório contém parsing, validação, estrutura de pilhas, operações e lógica de ordenação. A documentação não afirma score oficial da 42 ou benchmark que não esteja registrado no próprio repositório.

## O que este projeto demonstra

- estruturas de dados em C;
- algoritmos sob restrições;
- parsing robusto;
- tratamento de edge cases;
- gerenciamento de memória;
- otimização baseada em uma métrica objetiva;
- disciplina para separar corretude de performance.

## Documentação

- [Technical Overview](docs/TECHNICAL_OVERVIEW.md) — modelo de dados, pipeline, validação e estratégia de testes.

## Autor

Desenvolvido por [Vinícius Fidelis](https://github.com/vinionix) durante a formação na 42 Rio.
