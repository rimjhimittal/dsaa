//Design the logic to remove the duplicate elements from an array!'
#include<iostream>
using namespace std;
int remDup(int arr[]){
    int ans = 0; 
    for(int i = 0 ; i< sizeof(arr); i++){
        ans= ans^arr[i];
    }
}
int main(){
    int arr[1000], n;
    cout<<"Enter number of elements in your array:"<<endl;
    cin>>n;
    cout<<"Enter elements with duplicate values:";
    for(int i= 0; i<n ; i++){
        cin>>arr[i];
    }
    remDup(arr);

}