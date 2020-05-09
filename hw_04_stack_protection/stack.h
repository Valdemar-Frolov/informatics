#ifndef STACK_H
#define STACK_H
struct stack
{
    int data;
    struct stack* next;
    int max;
};
push(struct stack** head, const char value);
int pop(struct stack** head);
print(struct stack** head);
int is_empty(struct stack* head);
int maxi(struct stack** head);





#endif
#pragma once
