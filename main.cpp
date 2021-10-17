//Bubble sort
#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,9,10,1,2,0};
    int n=sizeof(arr)/sizeof(int);
    //Doing the sorting
    for(int i=1; i<=n-1; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //Printing the sorted array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
