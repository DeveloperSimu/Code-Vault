#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

int pop()
{
    if (top == -1)
        return -1;

    return stack[top--];
}

void insertAtBottom(int value)
{
    int temp;

    if (top == -1)
    {
        push(value);
        return;
    }

    temp = pop();
    insertAtBottom(value);
    push(temp);
}

void reverseStack()
{
    int temp;

    if (top == -1)
        return;

    temp = pop();

    reverseStack();

    insertAtBottom(temp);
}

void display()
{
    int i;

    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
}

int main()
{
    int n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter stack elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        push(value);
    }

    printf("Original Stack: ");
    display();

    reverseStack();

    printf("Reversed Stack: ");
    display();

    return 0;
}