//Alternate way for Linear Sreach
#include<iostream>
using namespace std;
bool linearSearch(int array[], int size, int element){
    for(int i= 0; i<size ; i++){
    if(array[i]==element){
        return 1;
    }
     }
     return 0;
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
int a= linearSearch(arr, n, num);
if(a==1){
    cout<<"The element is in the array";
}
else{
cout<<"The element is not in the array";}}