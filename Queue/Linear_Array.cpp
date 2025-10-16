#include<stdio.h>
#include<iostream>

int queue_arr[100];
int front=-1;
int rear=-1;
int n=100;
void Insertion_queue(int value){
    if(rear==n-1){
        printf("Queue Overflow\n");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue_arr[rear]=value;
        printf("Inserted %d\n",value);
    }
}
void deletion_queue(){
    if(front==-1 || front>rear){
        printf("Queue Underflow\n");
    }
    else{
        printf("Deleted %d\n",queue_arr[front]);
        front++;
    }
}