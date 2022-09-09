#include<iostream>
using namespace std;

void create(){
    int n, arr[10000];
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"Enter elements:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];

    }
}
void display(){
     int n, arr[10000];
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"enter elements:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void insert(){
       int n, arr[10000];
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"enter elements:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int num, pos;
    cout<<endl<<"Number to be inserted:";
    cin>>num;
    cout<<"Position:";
    cin>>pos;
    for(int i = n+1; i> pos- 1 ; i--){
        arr[i]= arr[i-1];
    }
    arr[pos- 1]= num;
    for(int i= 0; i<n+1 ; i++){
        cout<<arr[i]<<" ";
    }
}

void Delete(){
      int n, arr[10000];
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"enter elements:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int pos;
    cout<<"Position of the number you want to delete:";
    cin>>pos;
    for(int i = pos-1; i< n; i++){
        arr[i]= arr[i+1];
    }
for(int i= 0; i<n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
    
int  search(){
    //linear search
     int n, num , arr[10000];
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"enter elements:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the number you want to search :";
    cin>>num;
    for(int i = 0; i <n ; i++){
        if (arr[i]==num){
            cout<<"Number is found at the position "<<i+1<<endl;
        }//Need to tell when number is not there in the array!
    }

}
int main(){
    int n;
    cout<<"Chooose from the following operations on a array:\n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Exit"<<endl;
    cin>>n;
    switch (n){
        case 1: create();
            break;
        case 2: display();
            break;
        case 3: insert();
            break;
        case 4: Delete();
            break;
        case 5: search();
            break;
        case 6: 
            break;
     }
}