#include <bits/stdc++.h>
using namespace std;



// Key Pair/ Two Sum - GFG/ notebook  [Two Sum - on LeetCode ]
// LC : 724 : Find Pivot Index - notebook/ LC 
// LC : 75 : Sort colors - notebook / LC
// LC : 268 : Missing Number - notebook / LC
// Move all -ve no to Left of the array - notebook 
// LC : 287 : Find the Duplicate Number - notebook / LC
// missing elements from an array with Duplicates - notebook  [ findMissing , findMissing2]
// find 1st repeating element - gfg/ nb 
// common elements [gfg] in 3 sorted arrays - gfg / nb 
// Wave print a Matrix 
// SPiral Matrix - LC : 54 
// GFG -> Add two numbers represented by two arrays
// GFG -> Factorials of large numbers  [ vvvimp ] 
// lc : 26 ->  Remove duplicate from Sorted array 
// Lc 643 - Maximum average subarray I








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


// Wave print a Matrix - columnwise 
// wave form - Row wise : HW 
void wavePrintMatrix(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size() ;

    for(int startCol=0 ; startCol < n ; startCol++)
    {
        if((startCol & 1) == 0)
        {
            // even numb COl - top to bottom
            for(int i=0 ; i<m ; i++){
                cout<<v[i][startCol]<<"  " ;
            }
        }
        else{
            // odd numb COl - bottom to top
            for(int i=m-1 ; i>=0 ; i--){
                cout<<v[i][startCol]<<"  " ;
            }
        }
    }
}








int main()
{
    // int arr[] = {1, 3 , 5, 3, 3};
    // int n = 5;
    // findMissing(arr, n);
    // findMissing2(arr, n);


    vector<vector<int>> v{
        {1, 2, 3, 4} ,
        {5, 6, 7, 8} ,
        {9, 10, 11, 12}
    };

    wavePrintMatrix(v);





    return 0 ;
}
