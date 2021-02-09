//
// Created by 陈濛 on 2021/2/10.
//
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


Queue* CreateQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (!q) {
        printf("空间不足\n");
        return NULL;
    }
    q->front = -1;
    q->rear = -1;
    q->size = 0;
    return q;
}

int IsFullQ(Queue* q) {
    return (q->size == MAXSIZE);
}

void AddQ(Queue* q, ElementType item) {
    if (IsFullQ(q)) {
        printf("队列已满\n");
        return;
    }
    q->rear++;
    q->rear %= MAXSIZE;
    q->size++;
    q->data[q->rear] = item;
}

int IsEmpty(Queue* q) {
    return (q->size == 0);
}

ElementType DeleteQ(Queue* q) {
    if (IsEmpty(q)) {
        printf("空队列\n");
        return ERROR;
    }
    q->front++;
    q->front %= MAXSIZE;
    q->size--;
    return q->data[q->front];
}

void PrintQueue(Queue* q) {
    if (IsEmpty(q)) {
        printf("空队列\n");
        return;
    }
    printf("打印队列数据元素：\n");
    int index = q->front;
    int i;
    for (i = 0; i < q->size; i++) {
        index++;
        index %= MAXSIZE;
        printf("%d ", q->data[index]);
    }
    printf("\n");
}