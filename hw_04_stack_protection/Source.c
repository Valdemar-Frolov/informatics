#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "stack.h"

/*int check(char** s)
{
    int j = 0;
    int a, b=0;    
    int i = 0;
    struct stack* p = NULL;
    i = strlen(s);
    char* c = &s[0];
    //printf("c=%c", *c);
    char o = 0;
    for(j=0;j<i;j++)
    {
       // printf("s=%c", *c);
        if (*c == ']')
        {
            //printf("!!!");
            o = pop(&p);
            if (o == 0)
                return 0;
            else
                if (o != '[')
                    return 0;
        }
        if (*c == '[')
            push(&p, '[');
        if (*c == '}')
        {
            o = pop(&p);
            if (o == 0)
                return 0;
            else
                if (o != '{')
                    return 0;
        }
        if (*c == '{')
            push(&p, '{');
        if (*c == ')')
        {
            o = pop(&p);
            if (o == 0)
                return 0;
            else
                if (o != '(')
                    return 0;
        }
        if (*c == '(')
            push(&p, '(');
       
        c++;
    }   
   // printf("j=%d ", j);
   // printf("i=%d ", i);
    a = is_empty(p);
   // print(&p);
   // printf("a=%d ", a);
    if (a==1)
        return 1;
    else
        return 0;
}
*/

main()
{
    int a = 0;
    struct stack *p = NULL;
    int buf = 0;
    while (1)
    {
        printf("1 - push\n");
        printf("2 - pop\n");
        printf("3 - max\n");
        printf("4 - print\n");
        printf("0 - exit\n");
        scanf("%d", &buf);
        if (buf == 1)
        {
            scanf("%d", &a);
            push(&p, a);
        }
        else
            if (buf == 2)
            {
                int b = 0;
                b = pop(&p);
                printf("%d", b);
            }
            else
                if (buf == 3)
                {
                    int c = 0;
                    c = maxi(&p);
                    printf("%d", c);
                }
                else
                    if (buf == 4)
                    {
                        print(&p);
                    }
                    else
                    if (buf == 0)
                    {
                        return 0;
                    }

    }
    while (getchar() != '\n');
    getchar();


    return 0;
}