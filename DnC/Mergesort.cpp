#include <iostream>
using namespace std;

// DnC - class1 : Read about TC & SC of this sort 

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    // create left & right array
    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    // copy values from original arry to left & right arr
    int k = s; // left arr
    for (int i = 0; i < lenLeft; i++)
    {
        left[i] = arr[k];
        k++;
    }

    int p = mid + 1;  // right arr
    for (int i = 0; i < lenRight; i++)
    {
        right[i] = arr[p];
        p++;
    }

    // left arr & right arr : are already Sorted
    // so MAIN Sorting starts here - [ merge of 2 sorted array ]
    int leftIndex = 0;
    int rightIndex = 0;

    // VVVIMP
    int mainArrayIndex = s;

    while (leftIndex < lenLeft && rightIndex < lenRight)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else
        {

            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }

    // if left arr Exhausted - only right arr elem remaining
    while (rightIndex < lenRight)
    {
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }
    // if right arr Exhausted - only left arr elem remaining
    while (leftIndex < lenLeft)
    {
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e)
{
    // Base Case ->
    // if arr is (s>e i.e. Invalid arr). Also single element dont need sorting (s==e)
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // left arr : [s to mid]
    // right arr : [mid+1 to e]
    // call Recursion now -> to sort the left and right arr

    // recursive call for Left arr
    mergeSort(arr, s, mid);
    // recursive call for Right arr
    mergeSort(arr, mid + 1, e);

    // merge 2 sorted array
    merge(arr, s, e);
}

int main()
{
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    mergeSort(arr, s, e);

    cout<<"After merge sort : "<< endl ;

    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" -> ";
    }

    return 0;
}
