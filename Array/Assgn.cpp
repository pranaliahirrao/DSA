#include <bits/stdc++.h>
using namespace std;



// Key Pair/ Two Sum - GFG/ notebook
// LC : 724 : Find Pivot Index - notebook/ LC 
// LC : 75 : Sort colors - notebook / LC
// LC : 268 : Missing Number - notebook / LC
// Move all -ve no to Left of the array - notebook 
// LC : 287 : Find the Duplicate Number - notebook / LC
// missing elements from an array with Duplicates - notebook  [ findMissing , findMissing2]
// find 1st repeating element - gfg/ nb 
// common elements [gfg] in 3 sorted arrays - gfg / nb 





// method 1 
void findMissing(int *arr , int n)
{
    // visited 
    for(int i=0 ; i<n ; i++)
    {
        int index = abs(arr[i]);
        // making that element -ve 
        if(arr[index -1] > 0){
            arr[index -1] *= -1 ;
        }
    }

    // all +ve elements are missing 
    for(int i= 0 ; i<n  ; i++)
    {
        if(arr[i] > 0)
        {
            cout<<i+1 ;
        }
    }
}

// method 2 - sort and swap
// tc = o(n) , sc = o(1)
void findMissing2(int *arr , int n)
{
    int i=0 ; 
    while(i <n )
    {
        int index = arr[i] - 1;
        if(arr[i] != arr[index])
        {
            swap(arr[i] , arr[index]);
        }
        else{
            i++ ;
        }
    }
    for(int i= 0 ; i<n ; i++){
        if(arr[i] != i+1){
            cout<<i+1<<" " ;
        }
    }
}


int main()
{
    int arr[] = {1, 3 , 5, 3, 3};
    int n = 5;
    // findMissing(arr, n);
    findMissing2(arr, n);

    return 0 ;
}
