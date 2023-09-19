#include <bits/stdc++.h>
using namespace  std ;


// print 2D array : ROW wise 
void print2DArray(int arr[][4], int row, int col)
{
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j]<<"  ";
        }
    }
}

// COLUMN wise print an 2D array
void printColumnWise(int arr[][4], int row, int col)
{
    for(int j=0 ; j<col ; j++){
        for(int i=0 ; i<row ; i++){
            cout<<arr[i][j]<<"  ";
        }
    }
}



int main()
{
    // 2D Array presentation [ initialization ]
    int arr[3][4] = {
        {1, 2, 3, 4},        
        {10, 20, 30, 40},        
        {11, 21, 31, 41}      
    };

    int row =3 ; 
    int col = 4 ;
    // print2DArray(arr, row , col);
    printColumnWise(arr, row , col);
   
    return 0 ;
}

