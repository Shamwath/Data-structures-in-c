#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value) {
if (top == MAX-1) {
printf("stack is overflow\n");
}
else{
top ++;
stack[top] = value;
}
}
void pop(){
if(top == -1)  {
printf("stack underflow\n");
}
else{
printf("popped:%d\n",stack[top]);
top --;
}
}
void display() {
int i;
for(i = top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
int main(){
push(10);
push(20);
push(30);
display();
pop();
display();
}