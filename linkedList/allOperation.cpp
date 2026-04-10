#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void display(Node * head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data <<"<->";
        temp = temp -> next;
    }

    cout << "NULL" << endl;

}

//Insert at Head
void InsertatHead(Node * &head, int data){
    Node * nodetoinsert = new Node(data);
    nodetoinsert -> next = head;
    head = nodetoinsert;
}


//Insert at Tail
void InsertAtTail(Node * &head, int data){
    Node * newNode = new Node(data);
    Node * temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

//Insert at Middle
void InsertAtMiddle(Node * &head, int value){
    Node * slow = head;
    Node * fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    Node * data = new Node(value);
    data -> next = slow -> next;
    slow -> next = data;
}

//Delete at Head
void DeleteAtHead(Node * &head){
    Node * temp = head;
    head = head -> next;
    delete temp;
}

//Delete at Tail
void DeleteAtTail(Node * &head){
    if(head == nullptr){
        return;
    }

    Node * temp = head;
    while (temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
    
}

//Delete at Middle
void DeleteAtMiddle(Node * &head){
    if(head == nullptr){
        return;
    }

    Node * slow = head;
    Node * fast = head;
    Node * prev = NULL;

    while(fast != NULL && fast -> next != NULL){
        prev = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    prev -> next = slow -> next;
    delete slow;
}

//Reverse LinkedList
void Reverse(Node * &head){
    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main(){
    Node *head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);

    cout << "LinkedList : " <<endl;
    display(head);
    cout << endl;

    cout << "After insertion at head: " <<endl;
    InsertatHead(head, 5);
    display(head);
    cout << endl;


    cout << "After insertion at tail: " <<endl;
    InsertAtTail(head, 7);
    display(head);
    cout << endl;

    cout << "After insertion at middle: " <<endl;
    InsertAtMiddle(head, 52);
    display(head);
    cout << endl;
    
    cout << "After delete from head: " <<endl;
    DeleteAtHead(head);
    display(head);
    cout << endl;

    cout << "After delete from tail: " <<endl;
    DeleteAtTail(head);
    display(head);
    cout << endl;

    cout << "After delete from middle: " <<endl;
    DeleteAtMiddle(head);
    display(head);
    cout << endl;

    cout << "After Reverse the: " <<endl;
    Reverse(head);
    display(head);
}