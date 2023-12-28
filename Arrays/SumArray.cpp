#include<iostream>
using  namespace std;
int sum(int array[], int size){
    int sum=0;
    for(int i= 0; i<size; i++){
        sum+=array[i];
    }
    cout<<"Sum of all the elements in the array is "<< sum<<endl;


}
int main(){
   int n, arr[20];
cout<<"Number of elements in the array?(less than 20)"<<endl;
cin>>n;
cout<<"Enter elements"<<endl;
for(int i= 0; i<n; i++){
    cin>>arr[i];
} 
sum(arr, n);
}