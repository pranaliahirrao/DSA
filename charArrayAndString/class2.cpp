#include <bits/stdc++.h>
using namespace std;

// lc : 1047 - Remove all adjacent duplicate in string
// ip : abbaca  & op : ca
// TC = O(N)    && SC = O(N)
string removeDuplicates(string s)
{
    string ans = ""; // an empty string to store the answer
    int index = 0;   // to tranverse the given str

    while (index < s.length())
    {
        // if right most element in 'ans' string and given string 's' is same
        // then pop the last element/char of string 'ans'
        if (ans.length() > 0 && ans[ans.length() - 1] == s[index])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}



// LC : 1209 : HW







// LC : 1910 : Remove all Ocuurances of SubString
// hw : erase function khud se likho 
// hw : find function ke alag konse algo hai, vo dhundke , TC samjo
string removeOccurrences(string s, string part)
{
    while (s.find(part) != string::npos)
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}


// LC 680 : Valid Palindrome II 
class Solution {
public:
    bool checkPalindromeOrNot(string str , int i , int j)
    {
        while(i <= j)
        {
            if(str[i] != str[j])
            {
                return false ;
            }
            else{
                i++ ; j-- ;
            }
        }
        return true ;
    }
    
    // main function 
    bool validPalindrome(string str) {
        int i = 0 ;
        int j = str.length()-1 ;

        while(i < j)
        {
            if(str[i] == str[j])
            {
                i++ ; j-- ;
            }
            else{
                // remove the char and check if its palindrome or not 
                bool ans1 = checkPalindromeOrNot(str, i+1, j);
                bool ans2 = checkPalindromeOrNot(str, i, j-1);

                return ans1 | ans2 ;
            }
        } 
        return true ;
    }
};




// LC 539 -> Minimum Time Difference [ hw ]







// LC 647 -> Palindromic Substring
class Solution {
public:
    int expand(string s , int i , int j)
    {
        int count=0 ; 
        while(i>=0 && j<=s.length() && s[i] == s[j])
        {
            count++ ; 
            i-- ;  
            j++ ;
        }
        return count ;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        for(int center= 0 ; center<s.length() ; center++)
        {
            // ODD
            int oddCount = expand(s , center , center);

            // EVEN
            int evenCount = expand(s , center , center+1);

            totalCount = totalCount + evenCount + oddCount ;
        }
        return totalCount ;
    }
};











int main()
{
    // string str = "abbaca";
    // string ans = removeDuplicates(str);
    // cout << "After removing duplicates, the new string will be : " << ans << endl;
     
    string s = "daabcbaabcbc";
    string part = "abc" ; 
    string ans = removeOccurrences(s , part);
    cout<<"after remov ocuurances of substring : "<<ans<<endl ;

    return 0;
}
