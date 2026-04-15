#include<iostream>
using namespace std;

int main()
{
    int n, i, j, min, temp;
    cout << "Enter no. of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    cout << "Sorted Array:\n";
    for(i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
