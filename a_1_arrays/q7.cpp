// Find a missing number in a sorted array:{1, 2, 3, 4, 6, 7, 8, 9}
#include <iostream>
using namespace std;
void missingNum(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] != arr[i] + 1)
        {
            cout << "The missing number is " << arr[i] + 1;
            return;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    missingNum(arr, 8);
}