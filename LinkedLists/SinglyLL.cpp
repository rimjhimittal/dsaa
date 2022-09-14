#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    
    //constructor
    Node(int data){
        this->data= data;
        this->next= NULL;

    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this-> next != NULL){
            delete next ;
            this-> next = NULL; 
        }
        cout<<"Memory has been freed for value "<<value<<endl;
    }


};

void insertAtHead(Node * &head, int d){
    Node * temp = new Node(d);
    temp->next=head;
    head = temp;

}


void insertAtTail( Node * &tail, int d){
Node * temp = new Node(d);
tail-> next =  temp;
tail = temp;

}


void insertAtPosition(int position, Node * &head, Node * &tail,  int d){
    
    if(position==1){
        insertAtHead(head, d);
    return;
    }
    Node * temp = head;
    int cnt = 1;


    while(cnt<position-1){
        temp= temp-> next;
        cnt++;
    }
    
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node * newnode = new Node(d);
    newnode -> next = temp -> next;
    temp -> next = newnode;


}

void deletenode(Node * &head, Node * &tail, int position){
    if(position ==1){
        Node * temp = head;
        head= head-> next;
        //memory free
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
        delete curr;

    }

}

void print(Node * &head){

    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp-> next;
    }   cout<<endl;


}

int main(){

    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtPosition(2, head, tail, 56);
    print(head);
    deletenode(head , tail,  4);
    print(head);
    cout<<"head "<<head-> data<<endl;
    cout<<"tail "<<tail-> data<<endl;
}
