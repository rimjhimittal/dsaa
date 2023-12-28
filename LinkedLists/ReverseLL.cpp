//Reversing a linked list
#include<iostream>
using namespace std;

class Node{
public:
int data;
Node * next;
Node(int data){
    this->data= data;
    this->next= NULL;

}
};

void insertAtTail( Node * &tail, int d){
Node * temp = new Node(d);
tail-> next =  temp;
tail = temp;
}

void print(Node * &head){
    Node * temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp-> next;
    }
    cout<<endl;
}

Node * reverse(Node * &head){

    if(head == NULL|| head -> next == NULL){
        return head;
    }

    Node * prev = NULL;
    Node * curr = head;
    Node * fwd = NULL;

    while(curr!= NULL){
        fwd = curr-> next;
        curr-> next = prev;
        prev  = curr;
        curr = fwd;
    }
    return prev;
    

}

int main(){
    int  A[]= {1, 2 , 3, 4, 5, 6, 7 };
    Node * node1 = new Node(A[0]);
    Node * head= node1; 
    Node * tail= node1; 
    for(int i = 1; i< 7; i++){
        insertAtTail(tail, A[i]);
    }
    print(head);
    reverse(head);
}