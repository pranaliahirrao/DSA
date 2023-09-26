#include<iostream>
#include<vector>
using namespace std ;

void print(vector<int> v)
{
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


// TC = O(n^2) ; sc=O(1)
void selectionSort(vector<int> &v)
{
    int n = v.size();

   for(int i= 0 ; i<n-1 ; i++)
   {
    int minIndex = i ;
    for (int j = i+1; j<n; j++)
    {
        if(v[j] < v[minIndex])    // increasing order 
           minIndex = j;
    }
   swap(v[i] , v[minIndex]); 
   }
}

// for decreasing order 
// if(v[j] > v[minIndex])



void insertionSort(vector<int> &v)
{
    int n = v.size();
    for(int i=1 ; i<n ; i++)
    {
        int key = v[i] ;
        int j = i-1 ;
        while(j>=0 && v[j] > key)
        {
            v[j+1] = v[j] ;
            j-- ; 
        }
        v[j+1] = key ;
    }
}


int main()
{
    vector<int> v2 = {5, 17, 2, 11, 45, 89};
    vector<int> v = {44, 33, 55, 22, 11};
    // selectionSort(v);
    insertionSort(v);
    print(v) ;
    
    return 0 ;
}


