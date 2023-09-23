#include <bits/stdc++.h>
using namespace std;

// LC 33 : search in Roated Sorted Array : Find Pivot elemenet
// the highest val numb is Pivot element
// NOTE : IMP - try to put else [ line 38 : s = mid+1 ] condition first & then write the code

int pivotElement(vector<int> &nums)
{
    int n = nums.size();
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            // when only single elem is there & both s, e [also m]
            // will be pointing to that single element
            // corner case.
            return s;
        }

        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        else if (mid + 1 < n && nums[mid] > nums[mid] + 1)
        {
            return mid;
        }
        else if (nums[s] > nums[mid])
        {
            // on line B , left me shift karo
            e = mid - 1;
        }
        else
        {
            // on line A , Right me shift karo
            s = mid + 1;
        }
        // catch is here : update mid value
        mid = s + (e - s) / 2;
    }
    return -1;
}


// LC 69 : Sqrt(x)
int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        // check : mid hi to ans nahi hai
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // right me javo
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // mid*mid > x
            // left me javo
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


// LC 74 : Search a 2D matrix
// 1D to 2D : row index (i) => mid/c   &  col index (j) => mid % c
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row * col;

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;
        int currNumber = matrix[rowIndex][colIndex];

        if (currNumber == target)
        {
            return true;
        }
        else if (currNumber < target)
        {
            // right shift
            s = mid + 1;
        }
        else
        {
            // left
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
   
    return false;
}




int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    int pivotIndex = pivotElement(v);
    cout << "Pivot element index is : " << pivotIndex << endl;

    return 0;
}
