#include <bits/stdc++.h>
using namespace std;




// find row-wise sum in 2D Array
void rowWiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum for Row " << i << " is : " << sum << endl;
    }
}

// find column-wise sum in 2D Array
void columnWiseSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum for Column " << i << " is : " << sum << endl;
    }
}

// find diagonal-sum & print elements
void diagonalElementSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
        cout << "Diagonal element at -> " << i << " is : " << arr[i][i] << endl;
    }
    cout << "Sum for diagonal elements in 2D array is: " << sum << endl;
}

// 2nd-Diagonal sum & print elements
void secondDiagonalElementSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if(i+j == col-1)
            {
            sum = sum + arr[i][j];
            cout << "2nd Diagonal element at -> " << i << " is : " << arr[i][j] << endl;

            }
        }
    }
    cout << "Sum for 2nd diagonal elements in 2D array is: " << sum << endl;
}

// TRANSPOSE of matrix [ 2d array - always need to be Square form]
// this is when we consider upper triangle part -> but same thing can be achieved using lower triangle
void transpose(int arr[][4], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)       // this is imp condition
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// lower triangle : transpose 
void transposeLowerTriangle(int arr[][4], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j=0 ; j <= i; j++)  // this is imp condition
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// method 3 : take another 2d array and true/false 


void print2DArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout<<endl;
    }
}


int main()
{
    // 2D Array presentation [ initialization ]
    int arr[4][4] = {
        {1, 2, -3, 4},
        {10, 20, 30, 400},
        {11, 21, 31, 41},
        {5, 7, 9, 6}};
    int row = 4;
    int col = 4;

  
    // rowWiseSum(arr, row, col);
    // columnWiseSum(arr, row, col);
    // diagonalElementSum(arr, row, col);
    // secondDiagonalElementSum(arr, row, col);

    cout<<"Before Transpose 2d array/matrix is : "<<endl;
    print2DArray(arr, row, col);
    // transpose(arr, row, col);
    transposeLowerTriangle(arr, row, col);
    cout<<endl;
    cout<<"After Transpose 2d array/matrix is : "<<endl;
    print2DArray(arr, row, col);
    



    return 0;
}
