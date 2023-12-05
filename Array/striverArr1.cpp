#include<iostream>
using namespace std ;

// find largest element in an array
int largestElem(int arr[], int n)
{
    int largestNumb = arr[0] ;
    for(int i=0 ; i<n; i++)
    {
        if(arr[i] > largestNumb){
            largestNumb = arr[i];
        }
    }
    return largestNumb ;
}

// find 2nd largest element in an array
int secondLargestElem(int arr[], int n)
{
    // METHOD - 1
    // int largestNumb = arr[0] ;
    // for(int i=0 ; i<n; i++)
    // {
    //     if(arr[i] > largestNumb){
    //         largestNumb = arr[i];
    //     }
    // }
    // int sLargestNumb = -1 ;    // we are considering array has only +ve elements
    // for(int i=0 ; i<n ; i++)
    // {
    //     if(arr[i] > sLargestNumb && arr[i] != largestNumb){
    //         sLargestNumb = arr[i] ;
    //     }
    // }
    // return sLargestNumb;


    // METHOD - 2 
    int largest = arr[0];
    int sLargest = -1 ;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > largest)
        {
            sLargest = largest ;
            largest = arr[i] ;
        }
        else if(arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i] ;
        }
    }
    return sLargest;
}

//  Check if Array is Sorted or not.
bool sortedArray(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] >= arr[i-1]){
        }
        else{
            return false ;
        }
    }
    return true;
}

// remove duplicates in-place from sorted array 
int removeDuplicates(int arr[], int n)
{
    // Method 1 : use Set- bcz it always have unique elements 

    // Method : 2 
    int i=0 ;
    for(int j=1 ; j<n ; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++ ;
        }
    }
    return i+1 ;
}

// Left rotate the array by one place 
int leftRotateArr(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1 ; i<n ; i++)
    {
        arr[i-1] = arr[i] ;
    }
    arr[n-1] = temp;
}

// Left rotate the array by K-place 
// k = num % k  [ if num=15 & k=7 then k = 15%7 = 1 ]








void printArray(int arr[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
}


int main()
{
    int arr[] = {0, 2, 9, 10, 75, 11};
    int n = sizeof(arr)/sizeof(int);
    // cout<<"Largest number is : "<<largestElem(arr, n);
    // cout<<"Second Largest number is : "<<secondLargestElem(arr, n);

    int arr2[] = {1, 2, 2, 31, 4};
    int size = 5 ;
    // bool result = sortedArray(arr2, size);
    // if(result){
    //     cout<<"Array is sorted"<<endl;
    // }else{
    //     cout<<"Array is not sorted"<<endl;
    // }
    
    int arr3[] = {1, 1, 3, 4, 4, 8, 9, 10, 10};
    int size3 = 9 ;
    // cout<<removeDuplicates(arr3, size3);

    int arr4[] = {1, 2, 3, 4, 5, 6};
    int size4 = 6 ;
    leftRotateArr(arr4, size4);
    printArray(arr4, size4);



    return 0 ;
}


