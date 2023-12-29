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


// Method 2 : Binary search => t.c. = O(n.log(n))
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
        // i+1 bcs we want to search in Right sub array
        if (bs(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}


// LC 658 : Find K-closest elements
// method : 1
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
    // return vector<int>(arr.begin()+l , arr.begin()+h+1) 
}

// method : 2 -> in lb dsa video check 2nd method 
// bs + 2ptr



// Exponential search and Unbounded binary earch 
// tc = O (log ( 2^log m / 2) )
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


// Book Allocation problem - 
// GFG - allocate minimum no. of pages
 bool isPossibleSolution(int A[], int N, int M, int mid)
    {
        int pageSum = 0 ;
        int c = 1 ;
        for(int i=0 ; i<N ; i++){
            if(A[i] > mid){
                return false ;
            }
            if(pageSum + A[i] > mid){
                c++ ;
                pageSum = A[i] ;
                if(c > M)
                {
                    return false ;
                }
            }
            else{
                pageSum += A[i] ;
            }
        }
        return true ;
    }

//Function to find minimum number of pages.
int findPages(int A[], int N, int M) 
    {
        if(M > N) return -1;
        
        int start = 0 ;
        int end = accumulate(A, A+N, 0) ;
        int ans = -1 ;
        
        while(start <= end)
        {
            int mid = (start+end) >> 1 ;
            if(isPossibleSolution(A, N, M, mid)){
                ans = mid ; 
                end = mid-1;
            }
            else{
                start = mid+1 ;
            }
        }
        return ans ;
    }

// Painters Partitiion Problem II - GFG

// Aggressive Cows - GFG 

// 






int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = size(arr)/size(int);
    int x = 13 ;
    int ans = expSearch(arr, n, k);
    cout<<"the element is at index : "<<ans<<endl ;

    return 0;
}
