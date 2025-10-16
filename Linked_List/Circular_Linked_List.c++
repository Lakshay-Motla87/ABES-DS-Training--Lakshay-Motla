#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    if (head == nullptr) {
        head = newNode;
        head->next = head; 
    } else {
        Node* temp = head;
        while (temp->next != head) 
            temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode; 
    }
}
void insertAtEnd(int value) {
        Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        head->next=head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next=head;
    }
}
void insertAfter(int key, int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    do {
        if (temp->data == key) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
    cout << "Node with value " << key << " not found.\n";
}
void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    if(head->next == head){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    Node* last = head;
    while(last->next != head)
        last=last->next;
    delete temp;
}
void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    Node* last = temp->next;
    temp->next = head;    
    temp->next = head;
    delete last;
    }
    }
void deleteByValue(int key) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == key) {
        deleteFromBeginning();
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key) {
        temp = temp->next;
    }
    if (temp->next == nullptr) {
        cout << "Node with value " << key << " not found.\n";
    } else {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}

int countNodes() {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
bool searchNode(int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            return true;   // found
        }
        temp = temp->next;
    }
    return false;  // not found
}

void display() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value, key;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After Node\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete by Value\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "9. Count Nodes\n";
        cout << "10. Search Node\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Enter key (node value after which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                insertAfter(key, value);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                cout << "Enter value to delete: ";
                cin >> key;
                deleteByValue(key);
                break;
            case 7:
                display();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            case 9:
                cout << "Total nodes: " << countNodes() << endl;
                break;
            case 10:
                cout << "Enter value to search: ";
                cin >> key;
                if (searchNode(key))
                cout << "Node with value " << key << " found.\n";
                else
                cout << "Node with value " << key << " not found.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    return 0;
}
