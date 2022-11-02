// Reverse an array:
#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    cout << "Reversed array is:";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, arr[100000];
    cout << "Length of array?";
    cin >> n;
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
}