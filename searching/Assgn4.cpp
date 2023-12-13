#include<iostream>
using namespace std;

// lc 532 : K-diff Pairs in an Array
// Method 1 : Two POinter approach
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans; // set bcz we want Unique elements
    int i = 0, j = 1;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++; // diff < k
        }
        if (i == j)
        {
            j++; // when both adj elem are same
        }
    }
    return ans.size();
}
// Method 2 : Binary search
int bs(vector<int> &nums, int start, int x)
{
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans; // set bcz we want Unique elements

    for (int i = 0; i < nums.size(); i++)
    {
        if (bs(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

// LC 658 : Find K-closest elements
vector<int> twoPointerMethod(vector<int> &arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;
    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    vector<int> ans;
    for (int i = l; i <= h; i++)
    {
        ans.push_back(arr[i]);
    }
}

// Exponential search and Unbounded binary earch 
int bs(int arr[], int start, int end, int x)
{
    while(start <= end)
    {
        int mid = (end-start)/2 ;
        if(arr[mid] == x){
            return mid ;
        }
        else if(arr[mid] < x){
            start = mid+1 ;
        }
        else{
            end = mid-1 ;
        }
    }
    return -1;
}

int expSearch(int arr[], int n , int x)
{
    if(x == arr[0]) return 0 ;
    int i=1 ;
    while(arr[i]<=x && i<n)
    {
        i = i*2 ;
    }
    return bs(arr, i/2, min(i, n-1), x);
}


int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = size(arr)/size(int);
    int x = 13 ;
    int ans = expSearch(arr, n, k);
    cout<<"the element is at index : "<<ans<<endl ;


    return 0;
}
