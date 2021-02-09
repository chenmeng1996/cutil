#include <stdio.h>
#include "queue.h"

void test1() {
    Queue* q = CreateQueue();

    AddQ(q, 0);
    AddQ(q, 1);
    AddQ(q, 2);
    AddQ(q, 3);
    AddQ(q, 4);
    AddQ(q, 5);
    PrintQueue(q);

    DeleteQ(q);
    DeleteQ(q);
    DeleteQ(q);
    PrintQueue(q);

    AddQ(q, 6);
    AddQ(q, 7);
    AddQ(q, 8);
    PrintQueue(q);

    AddQ(q, 8);
    AddQ(q, 8);
    AddQ(q, 8);
    AddQ(q, 8);
}

int main() {
    test1();
    return 0;
}

