#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
struct node* head=NULL;
void insbeg(int x){
    node* newnode=new node();
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}

void insend(int x){
    node* newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    if(head!=NULL){
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    else{
        insbeg(x);
    }
}

void insafter(int x,int key){
    node* newnode=new node();
    newnode->data=x;
    if(head!=NULL){
        node* temp=head;
        while(temp->data!=key && temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->data==key){
            newnode->next=temp->next;
            temp->next=newnode;
        }
        else{
            cout<<"Element "<<key<<" not found in the list\n";
        }
    }
    else{
        cout<<"List is empty\n";
    }
}

void delbeg() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}
void display() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main(){
    int choice,x,key;
    while(1){
        cout<<"1. Insert at beginning\n2. Insert at end\n3. Insert after a given element\n4. Delete from beginning\n5. Display\n6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element to be inserted: ";
                cin>>x;
                insbeg(x);
                break;
            case 2:
                cout<<"Enter the element to be inserted: ";
                cin>>x;
                insend(x);
                break;
            case 3:
                cout<<"Enter the element to be inserted: ";
                cin>>x;
                cout<<"Enter the element after which to insert: ";
                cin>>key;
                insafter(x,key);
                break;
            case 4:
                delbeg();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}

