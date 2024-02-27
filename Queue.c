#include <stdio.h>
int main() {
    printf("Enter Size : ");
    int n;
    scanf("%d", &n);//take queue size from the user as input
    int queue[n];//declare the queue of that specified size
    int rear = -1, front = -1;//declare a variable named as Rear and Front, initially the value of top will be -1
    int option, item;

    while (1) {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is Empty\n4 to check if the Queue is Full\n0 to exit\n");
        scanf("%d", &option);

        if (option == 1) {
            if (rear == n - 1) {
                printf("Overflow\n");//If Rear = maximum size of the Queue then Print: Overflow
            } else {
                printf("Enter the value to enqueue: ");
                scanf("%d", &item);//else ask user what value to enqueue, name it as “item”
                rear++;//increment the value of Rear by one
                queue[rear] = item;
                if (front == -1) {
                    front = 0;
                }
            }
            printf("Queue: ");
            for (int i = front; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
            printf("\n");

        }

        else if (option == 2) {
            if (front == -1 || front > rear) {
                printf("Underflow\n");
            }

            else {
                printf("Dequeued element: %d\n", queue[front]);
                front++;
            }
            printf("Queue: ");
            for (int i = front; i <= rear; i++) { //After the if else print the whole Queue
                printf("%d ", queue[i]);
            }
            printf("\n");
        }


        else if (option == 3) {
            if (front == -1 || front > rear) { //return true(1) if Queue is empty, false(0) otherwise
                printf("Queue is Empty\n");
            } else {
                printf("Queue is not Empty\n");
            }
        } else if (option == 4) {
            if (rear == n - 1) {  //return true(1) if Queue is Full, false(0) otherwise
                printf("Queue is Full\n");
            } else {
                printf("Queue is not Full\n");
            }
        } else if (option == 0) {
            return 0;
        } else {
            printf("Invalid input.\n");
        }
    }

    return 0;
}
