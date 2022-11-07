// Find Transpose of a matrix

#include <iostream>
using namespace std;

void findtranspose(int arr1[3][3])
{
    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = arr1[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

void findmultiplication(int arr1[3][3], int arr2[3][3])
{
    int multiply[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            multiply[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                multiply[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[3][3] = {{1, 0, 2}, {1, 40, 5}, {9, 7, 8}};
    int arr2[3][3] = {{0, 2, 5}, {8, 23, 0}, {3, 17, 60}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Transpose:" << endl;
    ;
    cout << endl;
    findtranspose(arr1);
    cout << endl;
    cout << "Multiplication" << endl;
    ;
    findmultiplication(arr1, arr2);
    return 0;
}