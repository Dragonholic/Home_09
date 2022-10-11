#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 100


typedef struct {
    int data[N];
    int top;

}StackType;


void init(StackType *S){
    S->top = -1;
}

int isEmpty(StackType *S){
    return S->top == -1;
}

int isFull(StackType *S){
    return S->top == N - 1;
}



void push(StackType *S, int c){
    if(isFull(S))
        printf("Full.\n");
    else{
        S->top++;


        S->data[S->top] = c;
    }
}


char pop(StackType *S){
    if(isEmpty(S)){
        printf("Empty. \n");
        return -1;
    }
    int c = S ->data[S->top];
    S->top--;
    return c;
}

char peek(StackType *S){
    if(isEmpty(S)){
        printf("Empty. \n");
        return -1;
    }
    return S ->data[S->top];

}



void enqueue(StackType *S, int a){
    push(S,a);

}



int dequeue(StackType *S,StackType *K){
    if (K->top == 0){
        for (int i = 0; i < S->top; ++i) {
            push(K, pop(S));
        }
       return pop(K);
    } else {
       return pop(K);
    }
}





int main(){
    StackType S, K;
    int Enq_N = 1 ;


    while(Enq_N != 0) {

        scanf("%d", &Enq_N);

        enqueue(&S,Enq_N);

    }







    return 0;
}