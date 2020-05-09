#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "stack.h"

int maxi(struct stack** head)
{
    struct stack* p = *head;
    return p->max;
}

push(struct stack** head, const char value)
{
    if (*head == NULL)
    {
        struct stack* t = (struct stack*)malloc(sizeof(struct stack));
        t->data = value;
        t->max = value;
        t->next = *head;
        *head = t;
    }
    else
    {
        struct stack* p = *head;
        struct stack* t = (struct stack*)malloc(sizeof(struct stack));
        t->data = value;
        printf("max = %d", p->max);
        if (p->max < value)
        {
           // printf("111");
            p->max = value;
            printf("max!! = %d", p->max);
        }
        
        t->max = p->max;
        t->next = *head;
        *head = t;
    }

}

int pop(struct stack** head)
{
        int i = 2;
        struct stack* b = *head;
        struct stack* p = *head;
        struct stack* t = *head;
        struct stack* ñ = *head;
        int a;
        a = p->max;
       
        printf("a = %d", a);
        if (t == NULL)
            return 0;
        else    
            if (t->data == p->max)
            {
                while (i != 0)
                {
                    a = b->data;
                    b = b->next;
                    i--;
                }
                printf("a = %d", a);

                *head = (*head)->next;
                char result = t->data;
                free(t);
                return result;

                while (p != NULL)
                {  
                    if (p->data > a)
                    {
                        printf("1 = !!!");
                        a = p->data;
                    }
                    p = p->next;
                }
                ñ->max = a;
                printf("b = %d", ñ);
                
            }
            else
            {
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

int is_empty(struct stack* head)
{
    int a = 0;  
    if (head == NULL)
       return 1;
    else
       return 0; 
}

