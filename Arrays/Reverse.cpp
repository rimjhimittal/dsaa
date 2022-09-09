//Reversing an array
//Doubt:Why not working?

#include<iostream>
using namespace std;
int revArray[20];
int  reverse(int array[], int size){
    for(int i= 0; i<size ; i++){
        revArray[i]= array[size-1];
}
}
int print(int array[], int size){
    for (int i= 0 ; i<size ; i++){
        cout<<revArray[size]<<" ";
    }
}

int main(){
int n, arr[20];
cout<<"Number of elements in the array?(less than 20)"<<endl;
cin>>n;
cout<<"Enter elements"<<endl;
for(int i= 0; i<n; i++){
    cin>>arr[i];
} 
reverse(arr, n);
print(arr, n);
}