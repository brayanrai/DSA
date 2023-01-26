#include <iostream>
using namespace std;
int main()
{
    cout<<"Bubble sort"<<endl;
    int arr[]= {20,10,45,5,30};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int j=0; j<length;j++)
    {
        for(int i=0;i<length;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int k=0; k<length; k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}