#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
            this-> data = data;
            this-> next = NULL;
    }

};

void print(Node * &head){
    Node * temp = head;
    while(temp!= NULL){
        temp=temp-> next;
        head= temp;
        cout<<"temp-> data"<<" ";
    }

}

int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    print(head);

}