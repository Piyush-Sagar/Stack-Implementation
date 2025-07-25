#include <stdio.h>
#include <stdbool.h>
int top=-1;
int user_input;
int max=999;
int stack[999];
void peek();
void push(int n);
void pop();
bool isFull();
bool isEmpty();
int main(){
    do{
        printf("Enter 1.Push 2.Pop 3.Peek 4.isFull 5.isEmpty 6.Exit\n");
        scanf("%d",&user_input);
        switch(user_input){
            case 1:{
                printf("Enter the number\n");
                int n;
                scanf("%d",&n);
                push(n);
                printf("Done\n");
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                peek();
                break;
            }
            case 4:{
                
                printf("%s\n",isFull()?"True":"False");
                break;
            }
            case 5:{
                printf("%s\n",isEmpty()?"True":"False");
                break;
            }
            case 6:{
                printf("Byee\n");
                break;
            }
            default:{
                printf("Error\n");
                break;
            }
        }
    }
    while (user_input != 6);
    

}
void peek(){
    if (top>-1){printf("%d\n",stack[top]);}
    else{printf("Stack is empty\n");}
}
void push(int n){
    if (top<max-1){
        stack[++top]=n;
    }
    else{
        printf("Stack Overflow\n");
    }
}
void pop(){
    if (top>-1){
        printf("%d\n",stack[top--]);
    }
    else{
        printf("Stack Underflow\n");
    }
}
bool isFull(){
    return top==max-1;
}
bool isEmpty(){
    return top==-1;
}