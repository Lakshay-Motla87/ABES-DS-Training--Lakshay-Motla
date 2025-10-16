#include<bits/stdc++.h>
using namespace std;

struct node{
    int coeff;
    int power;
    struct node* next;
};
struct node* poly1=NULL;
struct node* Poly2=NULL;
struct node* polysum=NULL;
struct node* getNode(int coeff, int power){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=coeff;
    newnode->power= power;
    newnode->next=NULL;
    return newnode;
}
void createPoly(struct node** poly, int coeff, int power){
    struct node* newnode=getndoe(coeff, power);
    if(*poly==NULL){
        *poly=newnode;
    }
    else{
        struct node* temp=*poly;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
