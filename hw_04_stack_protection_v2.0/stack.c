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
        //printf("max = %d", p->max);
        if (p->max < value)
        {
           // printf("111");
            p->max = value;
            //printf("max = %d", p->max);
        }
        
        t->max = p->max;
        t->next = *head;
        *head = t;
    }

}

int pop(struct stack** head)
{
        int i = 1;
        struct stack* b = *head;
        
        struct stack* t = *head;
        
        int a;
       //a = b->max;
       
        //printf("a = %d", a);
        if (t == NULL)
            return 0;
        else    
            if (t->data == b->max)
            {
                while (i != 0)
                {
                    b = b->next;
                    a = b->data;
                    
                    i--;
                }
                //printf("a = %d", a);

                *head = (*head)->next;
                char result = t->data;
                free(t);

                struct stack* p = *head;
                struct stack* c = *head;
                while (p != NULL)
                {  
                   // printf("a = %d", a);
                    if (p->data > a)
                    {
                        //printf("a = %d", a);
                        //printf("1 = !!!");
                        a = p->data;
                        
                    }
                    p = p->next;
                }
                //printf("a = %d", a);
                c->max = a;
                //printf("c = %d", c->max);
                return result;
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

