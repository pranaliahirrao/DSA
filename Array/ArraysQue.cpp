#include<iostream>
#include <bits/stdc++.h>
using namespace  std ;


void printArray(int arr[], int size)
{
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

// find the Unique element in an Array
int finduniqueElem(int arr[], int size)
{
    int ans = 0;
    for(int i=0 ; i<size ; i++){
        ans = ans ^ arr[i];
    }
    return ans ;
}

// print the each pair of an array
void printAllPairs(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"[ "<<arr[i]<<", "<<arr[j]<<" ]" ;
        }
         cout<<endl;
    }
}

// print the each TRIPLET pair of an array [ unique - should not repeat]
// three sum - quetions : hw 
void printTripletPair(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            for(int k=j+1 ; k<n ; k++){
            cout<<"[ "<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<" ]" ;
            }
        }
         cout<<endl;
    }
}

// sort 0's and 1's
void sort0and1(int arr[], int n)
{
    int left=0 , right=n-1;

    while(left < right)
    {
        while (arr[left] == 0 && left < right)
			left++;

		while (arr[right] == 1 && left < right)
            right--;
            
        if (left < right)
        {
			arr[left] = 0;
			arr[right] = 1;
			left++;
			right--;
		}
    }
}

// shift by 'k' element : hw 
void shiftArray(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1 ; i>=1 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int arr2[] = {1, 0, 1, 0, 1, 0, 0, 1, 0};
    int size2 = 9;

    int arr3[] = {10, 20, 30, 40, 50, 60};
    int size3 = 6;

    // int ans = finduniqueElem(arr, size);
    // cout<<ans<<endl;

    // printAllPairs(arr, size);

    // printTripletPair(arr, size);

    // sort0and1(arr2, size2);
    // sort(arr2, arr2+size2);
    // printArray(arr2, size2);

    // this is for right shift in Array
    shiftArray(arr3, size3);
    printArray(arr3, size3);

    // try for shift in LEFT in the array : HW


    // shift for 'K' no of elements in an array : HW 


    // pair sum or Two sum que : HW
    // three sum or Triplet sum que : HW



    return 0 ;
}
