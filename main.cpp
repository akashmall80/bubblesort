//Bubble sort
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,3,8,4,0};
    int n=sizeof(arr)/sizeof(int);
    //Sorting an array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //Printing the array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
