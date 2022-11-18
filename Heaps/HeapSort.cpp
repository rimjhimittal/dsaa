#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (left <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {

        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
    }
}

int main()
{
    int arr[5] = {35, 21, 45, 7, 67};
    int n = 5;
    // heap creation
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    // Printing the array
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    HeapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}