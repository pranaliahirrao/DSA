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


// Increasing order :  TC = o(n^2) 
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for(int i=0 ; i<n-1 ; i++)   // check terminating condition : outer loop
    {
        for(int j=0 ; j<n-i-1 ; j++)     // check terminating condition : inner loop
        {
            if(v[j] > v[j+1])
               swap(v[j], v[j+1]);
        }
    }
}



// for decreasing order - just use below steps/condition
// if(v[j] < v[j+1])
//   swap(v[j], v[j+1]);


int main()
{
    vector<int> v = {5, 17, 2, 11, 45, 89};
    bubbleSort(v);
    print(v) ;
    
    return 0 ;
}


