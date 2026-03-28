#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* next;
};
struct node *front = NULL, *rear = NULL;
void enqueue(int x) {
struct node*newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = x;
newNode->next = NULL;
if (rear == NULL) {
front = rear = newNode;
}
else {
rear->next = newNode;
rear = newNode;
}
}
void dequeue() {
if (front == NULL) {
printf("Queue Underflow\n");
return;
}
struct node* temp = front;
printf("Deleted: %d\n", front->data);
front = front->next;
free(temp);
if (front == NULL)
rear = NULL;
}
void display() {
struct node* temp = front;
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
}
int main() {
enqueue(5);
enqueue(15);
enqueue(25);
display();
dequeue();
display();
return 0;
}