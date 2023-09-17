#include<iostream>
#include<vector>

using namespace  std ;




void printArray(int arr[], int size)
{
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}


void shiftNumber(int arr[] , int n)
{
    int j= 0 ;
    for(int index=0 ; index<n ; index++)
    {
        if(arr[index] < 0){
            swap(arr[index] , arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {0,11, -3, 2, 4, -90,-6,12};
    int n = 7;

    shiftNumber(arr, n);
    printArray(arr, n);


    return 0 ;
}



