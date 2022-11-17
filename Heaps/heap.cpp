#include <iostream>
using namespace std;

#define n 100

class heap
{
    int *arr;
    int size;

public:
    heap()
    {
        arr = new int[n];
        size = 0;
    }

    void insert(int val)
    {

        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "Empty heap!" << endl;
            return;
        }

        // put last element on first's place [Time Complexity : O(1)]
        arr[1] = arr[size];
        // delete last node(previously root node) [Time Complexity : O(1)]
        size--;

        // take root to its correct position [Time Complexity : O(log n)]
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.print();
    h.deletefromheap();
    h.print();
}