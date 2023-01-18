#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[] ,int low, int high)
{
int pivot = arr[high];
int i= low-1; //-1
    for(int j= low; j<=high;j++)
    {
        if (arr[j]<pivot)
        {
            // printf("%d",arr[j]);
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
swap(&arr[i+1],&arr[high]);
return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if( low<high)
    {
        int pi= partition(arr,low,high);
        // printf("pi : %d \n",pi);
        quickSort(arr,low, pi-1);
        quickSort(arr,pi+1,high);
    }
}
void printArray(int arr[],int size)
{
    for(int k=0;k<size;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
}

//main function
int main()
{
    int data[]= {8,7,2,1,0,9,6};
    int n= sizeof(data)/sizeof(data[0]); //7
    printf("unsorted array : ");
    printArray(data,n);
    quickSort(data, 0, n-1);
    printArray(data,n);
}