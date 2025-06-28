#include <iostream>
#define MAX_SIZE 5

struct Stack_Tag{
    int data[MAX_SIZE];
    int size;
};

void pushSt(Stack_Tag *st, int v) {
    if(st->size < MAX_SIZE){
        st->data[st->size++] = v;
    }else{
        std::cerr << "error: the stack is full"; 
        exit(0);
    }
}

int popSt(Stack_Tag *st) {
   if(st->size <= 0){
       std::cerr << "error: stack is emty";
       exit(0);
   }else{
        return st->data[st->size--];
   }
}

int peekSt(Stack_Tag *st) {
    if(st->size <= 0){
        std::cerr << "error: stack is empty";
        exit(0);
    }
    return st->data[st->size - 1];

}


void printStackValue(int v) {
    std::cout << v << "| ";
}

void printStack(Stack_Tag *st) {
    if(st->size <= 0){
        exit(0);
    }
    for(int i = 0; i < st->size ;++i){
        printStackValue(st->data[i]);
    }
    std::cout << std::endl;
}
    
int main(void) {
Stack_Tag st = { .size = 0 };
pushSt(&st, 3);
pushSt(&st, 5);
pushSt(&st, 7);
printf("Initial stack: ");
printStack(&st);
printf("Popped: %d\n", popSt(&st));
printStack(&st);
printf("Popped: %d\n", popSt(&st));
printStack(&st);
printf("Popped: %d\n", popSt(&st));
printStack(&st);
return 0;

}
