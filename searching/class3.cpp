#include <iostream>
using namespace std;

// Divide - division using Binary Search  => t.c. = O(log n)
int getQuotient(int divisor, int divident)
{
  int s = 0;
  int e = divident;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    // if(divisor == 0)
    // {
    //     ans = INT_MAX;
    // }
    // else if(divident == 0)
    // {
    //     ans = 0 ;
    // }

    if (mid * divisor == divident)
    {
      return mid;
    }
    else if (mid * divisor < divident)
    {
      // ans store
      ans = mid;
      // right shift
      s = mid + 1;
    }
    else
    {
      // mid*divisor > divident
      // left me shift karo
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

// Binary search on Nearly sorted array
//
int nearlySortedArray(int arr[], int n, int target)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (mid - 1 >= 0 && arr[mid - 1] == target)
    {
      return mid - 1;
    }
    if (arr[mid] == target)
    {
      return mid;
    }
    if (mid + 1 < n && arr[mid + 1] == target)
    {
      return mid + 1;
    }

    if (target > arr[mid])
    {
      // right
      s = mid + 2;
    }
    else
    {
      // left
      e = mid - 2;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

// Find the ODD occuring element - vvimp
int findOddOccuringElement(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {

    // single element
    if (s == e)
    {
      return s;
    }

    // mid check -> even or odd
    if (mid & 1)
    { // mid&1 -> true -> odd number
      if (mid - 1 >= 0 && arr[mid - 1] == arr[mid])
      {
        // right me jao
        s = mid + 1;
      }
      else
      {
        // left me jao
        e = mid - 1;
      }
    }
    else
    {
      // even
      if (mid + 1 < n && arr[mid] == arr[mid + 1])
      {
        // right me jao
        s = mid + 2;
      }
      else
      {
        // ya toh main right part pr khada hu
        // ya toh main answer k upar khada hu
        // that's why e = mid krra hu
        //  kyoki e = mid - 1; se ans lost ho skta h
        e = mid;
      }
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main()
{
  int divisor = 5;
  int divident = 10;

  // int ans = getQuotient(abs(divisor), abs(divident));

  // if((divisor < 0 &&  divident < 0) || (divisor > 0 && divident > 0))
  // {
  //     cout<<"Quotient is : "<<ans<<endl;
  // }
  // else if((divisor > 0 && divident < 0)  ||  (divisor < 0 && divident > 0)){
  //     ans = ans * (-1);
  //     cout<<"Quotient is : "<<ans<<endl;
  // }

  // neartly sorted array - binary search
  int arr[] = {20, 10, 30, 50, 40, 70, 60};
  int n = 7;
  int target = 200;

  int targetIndex = nearlySortedArray(arr, n, target);
  if (targetIndex == -1)
  {
    cout << "Element not found " << endl;
  }
  else
  {
    cout << "Element fount at index : " << targetIndex << endl;
  }

  return 0;
}
