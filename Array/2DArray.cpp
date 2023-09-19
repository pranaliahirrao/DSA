// 2DArray -> Array level 3 : 11th sep 23
#include <bits/stdc++.h>
using namespace std;



// print 2D array : ROW wise
void print2DArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
    }
}

// COLUMN wise print an 2D array
void printColumnWise(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << "  "; // print row no , then col no
        }
        cout << "\n";
    }
}

// find element in 2d array : Searching
bool findTarget(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (target == arr[i][j])
                return true;
        }
    }
    return false;
}

// print MAXIMUM element in 2D array
int maximumNumber(int arr[][4], int row , int col)
{
    int maxNumber = INT_MIN;
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] > maxNumber)
              maxNumber = arr[i][j];
        }
    }
    return maxNumber;
}

// print MINIMUM element in 2D array
int findMinimumElement(int arr[][4], int row , int col)
{
    int minNumber = INT_MAX;
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] < minNumber)
              minNumber = arr[i][j];
        }
    }
    return minNumber;
}










int main()
{
    // 2D Array presentation [ initialization ]
    int arr[3][4] = {
        {1, 2, -3, 4},
        {10, 20, 30, 400},
        {11, 21, 31, 41}};
    int row = 3;
    int col = 4;

    // take INPUT in 2D arr
    int arr2[3][3];
    int row2 = 3;
    int col2 = 3;
    // for(int i=0 ; i<row2 ; i++){
    //     for(int j=0 ; j<col2 ; j++){
    //         cout<<"Enter element for row index: "<<i<<" and column index: "<<j <<endl;
    //         cin>>arr2[i][j];
    //     }
    // }
    // print2DArray(arr2, row2, col2);

    // print2DArray(arr, row , col);
    // printColumnWise(arr, row , col);

    // bool ans = findTarget(arr , row , col, 40);
    // if(ans)
    //    cout<<"Element is Present";
    // else
    //    cout<<"Not present";

    // int maxNum = maximumNumber(arr, row , col);
    // cout<<"Maximum no in 2D Array is : "<<maxNum<<endl;

    int minNumber = findMinimumElement(arr, row , col);
    cout<<"Minimum no in 2D Array is : "<<minNumber<<endl;

    return 0;
}
