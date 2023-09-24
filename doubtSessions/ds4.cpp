#include <bits/stdc++.h>
using namespace std;

// LC : 2149 - Rearrange array elem by sign
vector<int> rearrangeArray(vector<int> &nums)
{
    // method - 1
    vector<int> posArr , negArr , ans ;
    for(int i=0 ; i<nums.size() ; i++)
    {
        if(nums[i] < 0)
           negArr.push_back(nums[i]);
        else
           posArr.push_back(nums[i]);
    }
    int i=0 ;
    while(i < posArr.size())
    {
        ans.push_back(posArr[i]);
        ans.push_back(negArr[i]);
        i++ ;
    }
    return ans ;


    // Method - 2 : 2pointer approach
    vector<int> ans(nums.size(), -1);
    int odd = 1, even = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        if (num > 0)
        {
            ans[even] = num;
            even += 2;
        }
        else
        {
            ans[odd] = num;
            odd += 2;
        }
    }
    return ans;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = 3, col = 3;

    // logic to print DIAGONAL elem in 2D-Array
    int i = 0, j = col - 1;
    for (; j >= 0; j--)
    {
        // cout<<arr[j][i++]<<" ";  [ diagonal elem from bottom to top ]
        // cout<<arr[i++][j]<<" ";     [ diagonal elem from top to bottom ]
    }

    return 0;
}
