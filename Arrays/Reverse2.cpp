#include<iostream>
using namespace std;

void reverse(int array[], int size){
int start = 0;
int end= size-1;

while(start<= end){
    swap(array[start], array[end]);
size++;
end--;
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

reverse(arr, n);
printArray(arr, n);



}