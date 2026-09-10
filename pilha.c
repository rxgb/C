#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 100

typedef struct{
    int data [MAX];
    int top;
}Stack;

void init (Stack *s) {
    s->top=-1;
}

int vazio (Stack *s) {
    return s->top == -1;
}

int cheio (Stack *s) {
    return s->top == MAX-1;
}

void push(Stack *s, int val) {
    if(!cheio(s)){
        s->data[++s->top] = val;
        printf("Adicionado com sucesso\n");
    }
    else {
        printf("Erro ao adicionar número");
    }
}

int pop(Stack *s) {
    if (!vazio(s)){
        printf("Pop realiazdo com sucesso\n");
        return s->data[s->top--];
    }
    else {
        printf("Erro ao realizar Pop");
        return 0;
    }
}

int peek(Stack *s) {
    if (vazio(s)) {
        printf("Pilha vazia\n");
        return -1;
    }
    return s->data[s->top];
}

int main() {
    int x=0;
    Stack s;
    int y,z;
    
    init(&s);
    do {
        printf("\n=========== Pilha em C ===========\n");
        printf("|                                |\n");
        printf("|                                |\n");
        printf("|                                |\n");
        printf("|                                |\n");
        printf("|      O que deseja fazer?       |\n");
        printf("|                                |\n");
        printf("|                                |\n");
        printf("|     # 1 - push                 |\n");
        printf("|     # 2 - pop                  |\n");
        printf("|     # 3 - peek                 |\n");
        printf("|     # 4 - Encerrar programa    |\n");
        printf("|                                |\n");
        printf("\n==================================\n");
        printf("Digite uma opção: ");
        scanf("%d",&y);
        switch (y) {
            case 1:
                printf ("Digite o número que deseja adicionar: ");
                scanf("%d",&z);
                push(&s, z);
                break;
            case 2:
                pop(&s);
                sleep(2);
                break;
            case 3:
                printf("\nPeek: %d\n",peek(&s));
                sleep(2);
                break;
            case 4:
                x=4;
                break;
            default: 
                printf("\nDigite uma opção válida\n");
                break;
        }
    } while(x!=4);
}

