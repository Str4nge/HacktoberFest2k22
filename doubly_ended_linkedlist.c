#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node* prev;
    int data;
    struct Node* next;
}*first = NULL;

void create(int a[], int n)
{
    struct Node* t, * last;

    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1;i < n;i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int Length(struct Node* p)
{
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node* p, int index, int x)
{
    struct Node* t;

    if (index < 0 || index > Length(p))
        return;
    if (index == 0)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }

    else
    {
        for (int i = 0;i < index - 1;i++)
            p = p->next;
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if (p->next)p->next->prev = t;
        p->next = t;

    }
}

int Delete(struct Node* p, int index)
{
    int x = -1;

    if (index < 1 || index > Length(p))
        return -1;

    if (index == 1)
    {
        first = first->next;
        if (first)first->prev = NULL;
        x = p->data;
        free(p);
    }

    else
    {
        for (int i = 0;i < index - 1;i++)
            p = p->next;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        x = p->data;
        free(p);
    }
    return x;
}

void search(struct Node* p, int s)
{
    int i = 0;
    int f = 0;
    while (p)
    {
        if (p->data == s)
        {
            printf("Element %d found at position (Taking doubly ended list positions to be starting from 1)=%d ", s, i + 1);
            f = 1;
            break;
        }
        i++;
        p = p->next;
    }
    if (f == 0)
    {
        printf("Element not found!\n");
    }
    printf("\n");
}

void Display(struct Node* p)
{
    printf("\nAll elements of the doubly ended linked list are:\n");
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    printf("\n");
}

int main()
{
    printf("Enter the amount of elements:\n");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    create(a, n);
    Display(first);
    int s, z, y, index, index2;
    int w = 1;
    while (w != 0)
    {
        printf("Enter 1. to Insert:\n");
        printf("Enter 2. to Delete:\n");
        printf("Enter 3. to Search:\n");
        printf("Enter 4. to Display:\n");
        printf("Enter 0. to exit program:\n");
        scanf("%d", &w);
        switch (w)
        {
        case 1:
            printf("Enter the element to be inserted:\n");
            scanf("%d", &y);
            printf("Enter index (element positions starting from 0):\n");
            scanf("%d", &index);
            Insert(first, index, y);
            break;
        case 2:
            printf("Enter position (Considering doubly ended list positions to be starting from 1) of the element to be deleted:\n");
            scanf("%d", &index2);
            z = Delete(first, index2);
            printf("The Deleted element= %d\n", z);
            break;
        case 3:
            printf("Enter element to be found:\n");
            scanf("%d", &s);
            search(first, s);
            break;
        case 4:
            Display(first);
            break;
        case 0:
            break;
        }
    }
    return 0;
}