#include <bits/stdc++.h>
using namespace std;


bool checkSorted(int arr[], int size, int index)
{
    // base condition
    if(index >= size){
        return true ;
    }

    if(arr[index] > arr[index-1])
    {
        bool subAns = checkSorted(arr, size, index+1);
        return subAns;
    }
    else{
        return false;
    }
}


int main()
{
    int arr[] = {10};
    int size = 0 ;
    int index = 1 ;

    bool sorted = checkSorted(arr, size, index);

    if(sorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

    return 0;
}


