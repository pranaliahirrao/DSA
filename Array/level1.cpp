#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int fun2(int a)
{
    cout << a << endl;
    cout << "Its function 2" << endl;
    return a;
}

int fun1(int a)
{
    int c = fun2(a);
    cout << "Its function 1" << endl;
    return c;
}

void findMin(int arr[], int size)
{
    int minNumber = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // method 2nd
        // minNumber = min(arr[i] , minNumber);
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }

    cout << "Min number in the array is : " << minNumber << endl;
}

// reverse an array
void reverseArray(int arr[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

// extreme print in an Array
void extremePrint(int arr[], int n)
{
    int l = 0, r = n - 1;
   
    while (l <= r)
    {
        if (l == r)
        {
            cout << arr[l] << "  ";
        }
        else
        {
            cout << arr[l] << "  " << arr[r] <<"  ";
        }
        l++;
        r--;
    }
}

int main()
{
    // cout<<"hello"<<endl;
    // int a = fun1(5);
    // cout<<a<<endl;

    int arr[7] = {-10, 4, 90, 87, 9, 13, 54};
    int size = 7;
    // findMin(arr , size);
    // reverseArray(arr, size);
    extremePrint(arr , size);
    // printArr(arr, size);

    return 0;
}
