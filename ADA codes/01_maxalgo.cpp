#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter no. of elements: ";
    cin>>n;

    int A[n];
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int max=A[0]; //assumed A[0] max.
    for(i=1; i<n; i++)
    {
        if(A[i]>max)
        max = A[i];
    }

    cout<<"Maximum element = "<<max;
    return 0;
}