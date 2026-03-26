#include<stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* top = NULL;
void push(int value) {
struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
newNode -> data = value;
newNode -> next = top;
top = newNode;
}
void pop() {
if(top==NULL) {
printf("stack underflow\n");
}
else {
struct Node*temp = top;
printf("deleted: %d\n",temp -> data);
top = top -> next;
free(temp);
}
}
void display() {
struct Node*temp = top;
while (temp != NULL){
printf("%d\n",temp -> data);
temp = temp -> next;
}
}
int main() {
push(10);
push(20);
push(30);
display();
pop();
display();
}