#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 20
struct queue
{
   int data[SIZE];
   int front, rear;

};
void enqueue(struct queue *q, int num)
{
  if ((q->rear + 1) % SIZE == q->front)
  {
        printf("\nQueue overflow");
    }
    else
    {
        if (q->front == -1 && q->rear == -1)
        {
          q->front = q->rear = 0;
        }
        else
        {
          q->rear = (q->rear + 1) % SIZE;
        }
        q->data[q->rear] = num;
    }
}
int dequeue(struct queue *q)
{
    int num = -1;
    if (q->front == -1 && q->rear == -1)
    {
      return num;
    }
    else if (q->front == q->rear)
    {
        num = q->data[q->front];
        q->front = q->rear = -1;
    }
    else
    {
        num = q->data[q->front];
        q->front = (q->front + 1) % SIZE;
    }
  return num;

}
void display(struct queue *q)
{
 int i;
      (q->front == -1 && q->rear == -1)

    {
        printf("Queue is empty");
    }
    else
    {
        i = q->front;

        do

        {

            printf("%d ", q->data[i]);

            i = (i + 1) % SIZE;

        } while (i != (q->rear + 1) % SIZE);

    }

}

int main()

{

    int i, num, dq, n, eq;

    int enqagain[SIZE];

    struct queue p, *q;

    q = &p;

    q->front = -1;

    q->rear = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {

        scanf("%d", &dq);

        enqueue(q, dq);

    }

    scanf("%d", &dq);

    scanf("%d", &eq);

    for (i = 0; i < eq; i++)

    {

        scanf("%d", &enqagain[i]);

    }

    printf("Circular queue is: \n");

    display(q);

    for (i = 0; i < dq; i++)

    {

        num = dequeue(q);

        if (num == -1)

            printf("\nQueue underflow");

        else

            printf("\nDequeued = %d", num);

    }

    printf("\nCircular queue after dequeue is: \n");

    display(q);

    for (i = 0; i < eq; i++)

    {

        enqueue(q, enqagain[i]);

    }

    printf("\nCircular queue after enqueue is: \n");

    display(q);

    return 0;

}
