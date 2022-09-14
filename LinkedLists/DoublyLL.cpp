//Doubly Linked List

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    //constructor
    Node(int d){
        this -> prev = NULL;
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtHead(Node * &head, int d){
    if(head == NULL){
        Node * temp = new Node(d);
        head = temp;
        return;
    }
    else{
    Node * temp = new Node(d);
    temp-> next = head;
    head->prev= temp;
    head= temp;
    }
}

void insertAtTail(Node * &tail, int d){
    if(tail == NULL){
        Node * temp = new Node(d);
        tail = temp;
        return;
    }
    Node * temp = new Node(d);
    tail->next= temp;
    temp-> prev = tail;
    tail= temp;
    }

void insertAtPosition(Node * &head, Node * &tail,  int d , int position){
    if(position==1){
        insertAtHead(head, d);
    return;
    }

    Node * temp = head;
    Node * newnode = new Node(d);
    int cnt= 1;

    while(cnt < position-1 ){
        temp= temp-> next;
        cnt++;
    }
    if(temp->next = NULL)
    { insertAtTail(tail, d);
    return;
    }

    newnode-> next = temp->next;
    temp-> next-> prev = newnode;
    temp-> next = newnode;
    newnode-> prev = temp;
    }


void deletenode(Node * &head, Node * &tail, int position){
    if(position ==1){
        Node * temp = head;
        head= head-> next;
        //memory free
        temp-> next -> prev = NULL;
        temp -> next = NULL;

        delete temp;
    }
    else{
        Node * curr = head;
        Node * prev = NULL;

        int cnt  = 1;
        while(cnt< position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr->next==NULL){
            prev -> next = curr -> next;
            tail= prev;
        }
        else{
            prev -> next = curr -> next;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;

    }

}


void print(Node * &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp-> data<<" ";
        temp= temp-> next;

    }
    cout<<endl;

}

//gives length of Linked List
int getLen(Node * &head){
    int len = 0;
    Node * temp = head;
    while(temp!= NULL){
        len++;
        temp= temp-> next;
    }
    return len;
}

int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;

    print (head);
    
    insertAtHead(head, 25);
    print(head);
    
    insertAtTail(tail, 12);
    print(head); 

    deletenode(head, tail, 3);
    print(head);





    // cout<<endl;
    // insertAtPosition(head, tail, 17, 2);
    // print(head);
    // cout<<endl;
    //cout<<endl<<"Length"<<getLen(head)<<endl;
}

