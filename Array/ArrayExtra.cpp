// sep 12 - Array extra class
#include<iostream>
using namespace std;


// sort an array as : -ve elem at left & +ve elem at right side 
//  T.C. = O(n)
void shiftNegativeLeftSide(int arr[] , int n)
{
    int left=0 ;
    for(int index=0 ; index<n ; index++)
    {
        if(arr[index] < 0)
        {
            swap(arr[index], arr[left]);
            left++;
        }
    }
}


// LeetCode : 75 -> sort colors 
// LeetCode : 189 -> Rotate Array 
// LeetCode : 268 -> Missing Number 
// LeetCode : 2149 -> Rearrange array Elements by sign => HW 
// LeetCode : 2643 -> Row with Maximum ones   
// LeetCode : 48 -> Rotate Image  => VVVVIMPPP [ very imp ] => 1st step : Transpose & 2ns step : Reverse 



void printArray(int arr[], int n)
{
     for(int index=0 ; index<n ; index++)
    {
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[] = {0, -11, -7, 6, 3, -97, -23, 65, -56};
    int n = sizeof(arr)/sizeof(int);

    // cout<<"Before: "<<endl;
    // printArray(arr, n);
    // shiftNegativeLeftSide(arr, n);
    // cout<<"After: "<<endl;
    // printArray(arr, n);


    return 0;
}






