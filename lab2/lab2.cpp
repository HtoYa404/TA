#include <iostream>
const int MAX = 10;

struct Queue{
    int que[MAX];
    int head;
    int tail;
};

void init(Queue *q){
    q->head = 1;
    q->tail = 0;
}

void insert(Queue *q, int value){
    if(q->tail > MAX){
        std::cerr << "error: Queue overflow";
        exit(0);   
    }
    q->que[q->tail++] = value;
}

int isempty(Queue *q){ return q->tail < q->head;}

void print(const Queue *q){
    for(int i = q->head - 1; i < q->tail; ++i){
        std::cout << q->que[i] << "|";
    }
    std::cout << "\n";
}

int remove(Queue *q){ 
    if(!isempty(q)) return q->que[q->head++ - 1];
    std::cerr << "error: queue is empty";
    exit(0);
}

int main()
{
    Queue q;
    init(&q);

    insert(&q, 1);
    insert(&q, 2);
    insert(&q, 3);
    print(&q);

    std::cout << "Removed: " << remove(&q) << std::endl;
    print(&q);

    std::cout << "Removed: " << remove(&q) << std::endl;
    print(&q);

    std::cout << "Removed: " << remove(&q) << std::endl;
    print(&q);

    return 0;
}
