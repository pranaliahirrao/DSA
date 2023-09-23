#include <iostream>
using namespace std;

// Binary Search : TC = O(log n)
int binarySearch(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        // yahape mistake hoti hai
        // mid update karo
        mid = s + (e - s) / 2;
    }
    return -1;
}

// finde 1st occurance of an element in an sorted Array
int findFirstOccurance(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (target == arr[mid])
        {
            // ans store karo
            ans = mid;
            // 1st occurance we want -> thats why shift to LEFT side 
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        // yahape mistake hoti hai
        // mid update karo
        mid = s + (e - s) / 2;
    }
    return ans;
}

// finde LAST occurance of an element in an sorted Array
int findLastOccurance(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (target == arr[mid])
        {
            // ans store karo
            ans = mid;
            // LAST occurance we want -> thats why shift to RIGHT side 
            s = mid+1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        // yahape mistake hoti hai
        // mid update karo
        mid = s + (e - s) / 2;
    }
    return ans;
}

// find total occurance of an ELem in an sorted Array 
// totalOcc = findLastOccurance - findFirstOccurance +1 ;
int findTotalOccurance(int arr[] , int n , int target)
{
    int first = findFirstOccurance(arr, n, target);
    int last = findLastOccurance(arr, n, target);
    int totalOccur = last - first + 1 ;
    return totalOccur ;
}

// find missing element in an Sorted array
int findMissingElement(int arr[], int n )
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e)
    {
        int diff = arr[mid] - mid ;
        if(diff == 1)
        {
            // move to right 
            s = mid +1 ;
        }
        else{
            ans = mid ;
            // left me javo
            e = mid - 1 ;
        }
         mid = s + (e - s) / 2;
    }
    

    // edge case : when 1 to N is given then n+1 will be the ans 
    if(ans+1 == 0)
       return n+1 ;


    return ans+1 ;
}

// Peak elem in mountain array - lc : 852 / nb 



int main()
{
    //     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    //     int size = 9 ;
    //     int target = 100 ;
    //     int result = binarySearch(arr, size, target);
    //     if(result != -1)
    //     {
    //         cout<<"Target "<<target<<" preset at index : "<<result+1<<endl ;
    //     }
    //     else{
    //         cout<<"Target is not present in given array"<<endl ;
    //     }

    // int arr2[] = {10, 20, 30, 30, 30, 30, 40, 50, 60, 60, 80};
    // int n = sizeof(arr2)/sizeof(int);
    // int target = 20;

    // int ans = findFirstOccurance(arr2, n, target);
    // int ans = findLastOccurance(arr2, n, target);
    // if (ans == -1)
    // {
    //     cout << "Target is not present in given array" << endl;
    // }
    // else
    // {
    //     // cout << "First occurance of the target " << target << " is at index : " << ans << endl;
    //     cout << "LAST occurance of the target " << target << " is at index : " << ans << endl;
    // }

    // int totalOcc = findTotalOccurance(arr2, n, target);
    // cout<<"Total occurances of "<<target<<" is : "<<totalOcc<<endl;
    
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8; 
    int missingElem = findMissingElement(arr3, size) ;
    cout<<"Missing element is : "<<missingElem<<endl ;


    return 0;
}
