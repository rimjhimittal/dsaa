//Linear Search of a number in an array and printing its position
//Doubt: How to print if the given element in not in the array
#include<iostream>
using  namespace std;

int LinearSearch(int array[], int size, int num){
    int pos;
for(int i= 0; i<size ; i++){
    if(array[i]==num){
        pos= i;
        cout<<"The number"<<num<<"is at index"<<pos<<"and position"<<pos+1<<endl;
    }
}
}

int main(){
   int n, arr[20], num;
cout<<"Number of elements in the array?(less than 20)"<<endl;
cin>>n;
cout<<"Enter elements"<<endl;
for(int i= 0; i<n; i++){
    cin>>arr[i];
} 
cout<<"Which number do you want to search?"<<endl;
cin>>num;
LinearSearch(arr, n, num);
if(LinearSearch){
    cout<<"The number"<<num<<"is not in the given array!!"<<endl;
}
}