#include<iostream>
using namespace std;

int  main()
{
    int n,key;
    cout<<"Enter array size: ";
    cin>>n;
    int A[n];
    cout<<"Enter sorted array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter search element: ";
    cin>>key;

    int st=0, end=n-1, mid;

    while( st <= end)
    {
        mid = (st + end)/2;
        if(key>A[mid])
        {
            st = mid+1;
        } 
        else if(key<A[mid])
        {
            end = mid-1;

        }
        else { 
            cout<<"Element found at index "<<mid;
            return 0;
        }
    }
    cout<<"Element not found!!";
    return 0;
}