#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr, int target){
    int start = 0;
    int end = arr.size();
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}



int main()
{
    vector<int> arr = {9, 8, 5, 3, 2, 1};
    cout<<binarysearch(arr, 3);

}