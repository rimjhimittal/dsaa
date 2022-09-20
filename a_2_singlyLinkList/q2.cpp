/* Write a program to count the number of occurrences of a given key in a singly linked list and then delete all the occurrences. 
For example, if given linked list is 1->2->1>2->1-3-1 and givenkey is 1. then output should be 4. 
After deletion of all the occurrences of 1. the linked list is 2->2->3. */
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    //constructor
    Node(int data){
        this-> data= data;
        this-> next = NULL;
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

int count(Node * &head, int key){
Node * temp = head;
int cnt = 0;
while(temp!= NULL){
    if(temp-> data == key){
        cnt++;
    }
    temp= temp-> next;
}
return cnt;

cout<<key<<" occurs "<<cnt<<" times "<<endl;

}

int search(int d, Node* &head){
    Node * temp = head;
    int pos= 1;
    
    while(temp!= NULL){
        if(temp->data==d){
            return pos;
        }
        temp= temp-> next;
        pos++;
    }
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
void finaldel(Node* &head, Node* & tail, int key){
for(int i = 0; i< count(head, key); i++){
    deletenode(head, tail, search(key, head));
}}




int main(){
    int  A[]= {1, 2 , 1, 2, 1, 3, 1 };
    Node * node1 = new Node(A[0]);
    Node * head= node1; 
    Node * tail= node1; 
    for(int i = 1; i< sizeof(A)/sizeof(int); i++){
        insertAtTail(tail, A[i]);
    }
    print(head);

    count(head, 1);

    finaldel(head, tail, 1);

    print(head);

}