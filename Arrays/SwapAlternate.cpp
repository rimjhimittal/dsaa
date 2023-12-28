//Program to swap the numbers in pairs: {1,2,3,4,5,6}=>{2,1,4,3,6,5}
#include<iostream>
using namespace std;
void swapAlt(int array[], int size){
    int i=0;
    while( i<size-1){
        swap(array[i], array[i+1]);
    i=i+2;
    }
}


void printArray(int array[], int size){
    for(int i = 0; i< size; i++){
        cout<<array[i]<<" ";
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

swapAlt(arr, n);
printArray(arr, n);
}