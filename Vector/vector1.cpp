#include<iostream>
#include<vector>

using namespace  std ;

int main()
{
    vector<int> arr;

    vector<int> arr2;
    arr2.push_back(10);
    arr2.push_back(19);
    arr2.push_back(15);
    arr2.push_back(40);
    cout<<"for vector arr2 : "<<endl;
    for(int i=0 ; i<arr2.size() ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;


    vector<int> arr3(5, 101);
    cout<<"for vector arr3 : "<<endl;
     for(int i=0 ; i<arr3.size() ; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<arr3.size()<<endl;
    cout<<arr3.empty();



    return 0 ;
}