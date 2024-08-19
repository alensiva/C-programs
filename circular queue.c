#include <stdio.h>

#define MAX 5 

int main() {
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, item;

    while (1) {

        printf("\n Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                if ((rear + 1) % MAX == front) {
                    printf("Queue is full!\n");
                } else {
                    printf("Enter the element to enqueue: ");
                    scanf("%d", &item);

                    if (front == -1) { 
                        front = rear = 0;
                    } else {
                        rear = (rear + 1) % MAX;
                    }

                    queue[rear] = item;
                    printf("%d enqueued to queue\n", item);
                }
                break;

            case 2:
                if (front == -1) {
                    printf("Queue is empty!\n");
                } else {
                    item = queue[front];
                    if (front == rear) { 
                        front = rear = -1;
                    } else {
                        front = (front + 1) % MAX;
                    }

                    printf("%d dequeued from queue\n", item);
                }
                break;

            case 3:
                if (front == -1) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements:\n");
                    int i = front;
                    while (1) {
                        printf("%d ", queue[i]);
                        if (i == rear) break;
                        i = (i + 1) % MAX;
                    }
                    printf("\n");
                }
                break;

            case 4: 
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
