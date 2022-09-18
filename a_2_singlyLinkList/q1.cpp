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

int search(int d, Node* &head){
    Node * temp = head;
    int pos= 1;
    
    while(temp!= NULL){
        if(temp->data==d){
            cout<< "position:"<<pos<<endl;;
        }
        temp= temp-> next;
        pos++;
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
    insertAtHead(head, 15);
    insertAtTail(tail, 12);
    insertAtPosition(2, head, tail, 56);
    cout<<"The given linked list is:";
    print(head);
    cout<<"What operations would you like to perform\n1. Insertion at the beginning\n2. Insertion At the end.\n3. Insert at Position.\n4. Delete from beginning\n5. Deletion from the end.\n6. Delete a specific node.\n7. Search for a anode and siplay its position.\n8. Display all node values."<<endl;
    int  n, d, pos;
    cin>>n;
    switch(n){
        case 1: cout<<"What element would you like to insert at head?"<<endl;
                cin>>d;
                insertAtHead(head,d);
                break;
        case 2: cout<<"What element would you like to insert at the end?"<<endl;
                cin>>d;
                insertAtTail(tail,d);        
                break;
        case 3: cout<<"What element would you like to insert?"<<endl;
                cin>>d;
                cout<<"Position?"<<endl;
                cin>>pos;
                insertAtPosition(pos, head, tail, d);  
                break;      
        case 4: deletenode(head, tail, 1);
                break;
        case 5: deletenode(head, tail, 4);
                break;
        case 6: cout<<"Position?"<<endl;
                cin>>pos;
                deletenode(head, tail , pos);
                break;
        case 7: cout<<"Element?"<<endl;
                cin>>d;
                search(d, head);
                break;
        case 8: 
                break;
        default: print(head);
        }

        print(head);



}
