// Bubble sort for 64, 34, 25, 12 , 22, 11 90
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int a = 1;
    while (a <= n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        a++;
    }
    cout << "The sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int n;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    BubbleSort(arr, 7);
}