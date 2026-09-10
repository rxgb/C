## Stack em C

Implementação de uma **pilha (Stack)** em C utilizando `struct`, array e ponteiros.

O projeto foi desenvolvido com o objetivo de praticar os conceitos de **estruturas de dados**, gerenciamento de elementos e manipulação de ponteiros na linguagem C.

## Funcionalidades

O programa possui um menu interativo com as seguintes operações:

* **Push** — adiciona um elemento ao topo da pilha.
* **Pop** — remove e retorna o elemento que está no topo.
* **Peek** — consulta o elemento no topo sem removê-lo.
* **Encerrar** — finaliza o programa.

## Estrutura

A pilha é representada por uma `struct` contendo:

```c
typedef struct {
    int data[MAX];
    int top;
} Stack;
```

O array `data` armazena os elementos, enquanto `top` controla a posição do elemento que está no topo da pilha.

A pilha utiliza o princípio **LIFO (Last In, First Out)**, em que o último elemento inserido é o primeiro a ser removido.

## Tecnologias

* C
* GCC
* Linux / Unix

## Como executar

Clone o repositório:

```bash
git clone https://https://github.com/rxgb/C
```

Entre na pasta do projeto:

```bash
cd pilha.c
```

Compile:

```bash
gcc main.c -o stack
```

Execute:

```bash
./stack
```

## Objetivo

Este projeto faz parte dos meus estudos de **Ciência da Computação**, com foco na prática de programação em C e no aprendizado de estruturas de dados fundamentais.
