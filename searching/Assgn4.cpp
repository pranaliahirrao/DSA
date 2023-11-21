#include <bits/stdc++.h>
using namespace std;

// lc 530 : K-diff Pairs in an Array
// Method 1 : Two POinter approach
   int findPairs(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        set<pair<int , int>> ans ;   // set bcz we want Unique elements 
        int i=0 , j=1 ;
        while(j < nums.size())
        {
            int diff = nums[j] - nums[i];
            if(diff == k){
                ans.insert({nums[i] , nums[j]}) ;
                i++ ; j++ ;
            }
            else if( diff > k){
                i++ ;
            }
            else{
                j++ ;     // diff < k
            }
            if( i == j){
                j++ ;    // when both adj elem are same 
            }
        }
        return ans.size() ;
    }
// Method 2 : Binary search 


// LC 658 : Find K-closest elements


int main()
{

    

    return 0;
}



