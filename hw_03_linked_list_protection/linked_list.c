#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "linked_list.h"

push(struct stack** head, const char value)
{
    struct stack* t = (struct stack*)malloc(sizeof(struct stack));
    t->data = value;
    t->next = *head;
    *head = t;
}

char pop(struct stack** head)
{
    int a = 0;
    struct stack* p = *head;
    while (p != NULL)
    {
        p = p->next;
        a++;
    }
    if (a == 1)
    {
        *head = NULL;
        printf("Now is empty");
    }
    else
    {
        struct stack* t = *head;
        *head = (*head)->next;
        char result = t->data;
        free(t);
        return result;
    }
}

print(struct stack** head)
{
    struct stack* p = *head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int is_empty(struct stack** head)
{
    char p;
    p = head;
    if (p == NULL)
    {
        return 1;
    }
}

get_Last(struct stack** head)
{
    struct stack* p = *head;
    if (p == NULL)
    {
        return NULL;
    }
    while (p->next)
    {
       p = p->next;
    }
    return p;
}

push_end(struct stack** head, const char value)
{
    struct stack* last = get_Last(head);
    struct stack* t = (struct stack*)malloc(sizeof(struct stack));
    t->data = value;
    t->next = NULL;
    last->next = t;
}

add_N(struct stack** head, int b, const char value)
{
    int a;
    int a1=0;
    struct stack* d = *head;
    struct stack* c = *head;
    struct stack* p = *head;
    struct stack* buf = *head;
    while (c != NULL)
    {
        c = c->next;
        a1++;
    }
    if (b == 1)
    {
        struct stack* t = (struct stack*)malloc(sizeof(struct stack));
        t->data = value;
        t->next = *head;
        *head = t;
    }
    else
        if (a1 == b)
    {
                struct stack* last = get_Last(head);
                struct stack* t = (struct stack*)malloc(sizeof(struct stack));
                t->data = value;
                t->next = NULL;
                last->next = t;
    }
    else
    {
        b--;
        a = b;
        a--;

        while (b != 0)
        {
            p = p->next;
            b--;
        }

        while (a != 0)
        {
            buf = buf->next;
            a--;
        }

        struct stack* t = (struct stack*)malloc(sizeof(struct stack));
        t->data = value;
        t->next = p;
        buf->next = t;
    }
}

delete_l(struct stack** head)
{
    int a = 0;
    struct stack* p = *head;
    struct stack* buf = *head;
    while (p != NULL)
    {
        p = p->next;
        a++;
    }
    if (a == 1)
    {
        *head = NULL;
        printf("Now is empty");
    }
    else
    {
        a = a - 2;
        while (a != 0)
        {
            buf = buf->next;
            a--;
        }
        buf->next = NULL;
    }
}
//Добавить функцию разворота списка reverse_list()
//Без дополнительной памяти (только переменные-указатели на ячейки списка)
//Нужно поменять порядок следования элементов
//Было:
//HEAD -> 2 -> 8 -> 9 -> NULL
//HEAD -> 9 -> 8 -> 2 -> NULL
reverse_list(struct stack** head)
{
    struct stack* a = *head;
    struct stack* b = NULL;
    struct stack* c = NULL;
    if (a == NULL)
        printf("There is nothing to reverse");
    else
    {
        while (a)
        {
            b = a->next;
            a->next = c;
            c = a;
            a = b;
        }
        *head = c;
    }
}