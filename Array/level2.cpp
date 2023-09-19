#include<iostream>
using namespace  std ;


// XOR approach -> 5^5 = 0  
// how to do it without XOR ??
void findUniqueElem(int arr[] , int n)
{
    int ans =0 ;
    for(int i=0 ; i<n ; i++){
        ans = ans ^ arr[i];
    }
    cout<<"Unique element is : "<<ans<<endl;
}

int main()
{
    int arr[] = {1, 7, 0, 2, 2, 1, 0};
    int n = 7;

    findUniqueElem(arr, n);

    return 0 ;
}
