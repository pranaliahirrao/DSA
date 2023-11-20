#include <bits/stdc++.h>
using namespace std;


bool checkSorted(int arr[], int size, int index)
{
    // base condition
    if(index >= size){
        return true ;
    }

    if(arr[index] > arr[index-1])
    {
        bool subAns = checkSorted(arr, size, index+1);
        return subAns;
    }
    else{
        return false;
    }
}

int binarySearch(int arr[] , int s, int e , int target)
{
    // base case
    if(s > e)
    {
        // element nhi mila
        return -1 ;
    }

    // processing 
    int mid = s + (e-s/2);
    if(arr[mid] == target)
    {
        return mid;
    }

    // baki Recursion sambhal lega 
    if(arr[mid] < target)
    {
        return binarySearch(arr, mid+1 , e, target);
    }else{
        return binarySearch(arr, s , mid-1 , target);
    }
}

void findSubSequences(string str, string output, int index, vector<string>& ans)
{
    // base case
    if(index >= str.length()){
        // cout<<"[ -> ]"<<output<<endl ;
        ans.push_back(output) ;
        return;
    }

    char ch = str[index];
    // exclude
    findSubSequences(str, output, index+1, ans);
    // include
    output.push_back(ch);
    findSubSequences(str, output, index+1, ans);
}



int main()
{
    // 1. Check if Array is Sorted in ASC order or Not
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int size = 7 ;
    // int index = 1 ;
    // bool sorted = checkSorted(arr, size, index);
    // if(sorted){
    //     cout<<"array is sorted";
    // }
    // else{
    //     cout<<"array is not sorted";
    // }

    // 2. BinarySearch using Recursion 
    // int arr2[] = {10, 20, 30, 40, 50, 60, 70};
    // int s=0 , e=6 ;
    // int target = 70 ;
    // int found = binarySearch(arr2, s, e, target);
    // if(found != -1){
    //     cout<<"Found at : "<<found<<endl;
    // }else{
    //     cout<<"Not found"<<endl;
    // }

    // 3. SubSequence of string : [abc = a,b,c,ab,ac,bc,abc,' ' ==> 2^n ]
    // should maintain same order ; not necessary to take continuous letter 
    string str = "abc";
    string output = "";
    int index = 0 ;
    vector<string> ans ; 
    findSubSequences(str, output, index, ans) ;
    cout<<"Printing all subSequence of string : "<<endl;
    for(string s : ans){
        cout<<" -> "<<s<<endl;
    }

    // 4. Maximize The Cut Segments - GFG [ exploring all possible ways ]
    // 5. Coin Change - LC : 322 
    // 6. House Robber - LC : 198


    return 0;
}


