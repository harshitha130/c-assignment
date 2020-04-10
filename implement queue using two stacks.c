#include <stdio.h>
#include <stdlib.h>
struct node
{
int intel;
struct node *next;
};
void push(struct node** top, int intel);
int pop(struct node** top);
struct queue
{
struct node *stack1;
struct node *stack2;
};
void enqueue(struct queue *q, int x)
{
push(&q->stack1, x);
}
void dequeue(struct queue *q)
{
int x;
if (q->stack1 == NULL && q->stack2 == NULL)
{
   printf("the queue is empty");
return;
}
if (q->stack2 == NULL) 
{
while (q->stack1 != NULL) 
{
x = pop(&q->stack1);
push(&q->stack2, x);
}
}
x = pop(&q->stack2);
   printf("%d\n", x);
}
void push(struct node** top, int intel)
{
struct node* newnode = (struct node*) malloc(sizeof(struct node));
if (newnode == NULL) {
   printf("overflow of stack \n");
return;
}
newnode->intel = intel;
newnode->next = (*top);
(*top) = newnode;
}
int pop(struct node** top)
{
int buff;
struct node *t;
if (*top == NULL)
{
   printf("underflow of stack \n");
return 0;
}
else
{
t = *top;
buff = t->intel;
*top = t->next;
free(t);
return buff;
}
}
void display(struct node *top1,struct node *top2)
{
while (top1 != NULL) 
{
   printf("%d\n", top1->intel);
top1 = top1->next;
}
while (top2 != NULL) {
   printf("%d\n", top2->intel);
top2 = top2->next;
}
}
int main()
{
struct queue *q = (struct queue*)malloc(sizeof(struct queue));
int f = 0, a;
char ch = 'y';
q->stack1 = NULL;
q->stack2 = NULL;
while (ch == 'y'||ch == 'Y')
{
   printf("choice to be entered\n1.add queue\n2.TO remove the current queue\n3.queue to be displayed\n4.exit\n");
   scanf("%d", &f);
switch(f)
{
case 1: 
   printf("the element that is added to the queue\n");
   scanf("%d", &a);
enqueue(q, a);
break;
case 2:
dequeue(q);
break;
case 3:
display(q->stack1, q->stack2);
break;
case 4: 
exit(1);
break;
default:
   printf("invalid\n");
break;
}
}
}
