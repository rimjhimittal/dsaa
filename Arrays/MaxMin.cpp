//Program to fine out maximum and minimum number from an array

/*
1. predefined variable INT_MIN stores the minimum value possible and INT_MAX th emaximum value possible in the compiler

2. There are prefined functions too which can be used to do this job- max(var1,var2) and min(var1, var2), Code for that is:

int min(int arr[], int n){
min1 = INT_MAX;
for (int i = 0; i<n ; i++){
min1 = min(arr[i, min1]);
}
cout<<"The minimum number is"<<min1;
}
*/

#include<iostream>
using namespace std;

int max(int array[], int size){
int m=INT32_MIN;
for(int i=0; i<size; i++){
if(array[i]>m){
    m=array[i];
}
}
cout<<"The Largest Number in the given array is"<<m<<endl;
}

int min(int array[], int size){
int m=INT32_MAX;
for(int i=0; i<size; i++){
if(array[i]<m){
    m=array[i];
}
}
cout<<"The Smallest Number in the given array is"<<m<<endl;

}

int main(){
int n, a, arr[20];
cout<<"Number of elements in the array?(less than 20)"<<endl;
cin>>n;
cout<<"Enter elements"<<endl;
for(int i= 0; i<n; i++){
    cin>>arr[i];
}
cout<<"Press 0 for minimum number in your array and 1 for maximum."<<endl;
cin>>a;
switch(a){
    case 0: min(arr, n);
        break;
    case 1: max(arr, n);
        break;
    default:
        cout<<"please enter a valid number!!!";
}
}
