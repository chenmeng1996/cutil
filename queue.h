//
// Created by 陈濛 on 2021/2/10.
//

#ifndef C123_B_H
#define C123_B_H

#endif //C123_B_H

#define ElementType int
#define MAXSIZE 6
#define ERROR -99

typedef struct {
    ElementType data[MAXSIZE];
    int front; //记录队列头元素位置
    int rear; //记录队列尾元素位置
    int size; //存储数据元素个数
}Queue;

Queue* CreateQueue();
int IsFullQ(Queue* q);
void AddQ(Queue* q, ElementType item);
ElementType DeleteQ(Queue* q);
void PrintQueue(Queue* q);