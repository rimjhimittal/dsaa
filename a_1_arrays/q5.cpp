// Binaryy Search
#include <iostream>
using namespace std;
void binarySearch(int arr[], int n, int ele)
{
    int start = 0, end = n, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (ele == arr[mid])
        {
            cout << ele << "is present at" << mid + 1;
            return;
        }
        else if (ele > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int n, arr[100000], ele;
    cout << "Length of array?";
    cin >> n;
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element you want to search?";
    cin >> ele;
    binarySearch(arr, n, ele);
}