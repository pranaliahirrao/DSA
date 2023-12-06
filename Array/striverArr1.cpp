#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

// find largest element in an array
int largestElem(int arr[], int n)
{
    int largestNumb = arr[0] ;
    for(int i=0 ; i<n; i++)
    {
        if(arr[i] > largestNumb){
            largestNumb = arr[i];
        }
    }
    return largestNumb ;
}

// find 2nd largest element in an array
int secondLargestElem(int arr[], int n)
{
    // METHOD - 1
    // int largestNumb = arr[0] ;
    // for(int i=0 ; i<n; i++)
    // {
    //     if(arr[i] > largestNumb){
    //         largestNumb = arr[i];
    //     }
    // }
    // int sLargestNumb = -1 ;    // we are considering array has only +ve elements
    // for(int i=0 ; i<n ; i++)
    // {
    //     if(arr[i] > sLargestNumb && arr[i] != largestNumb){
    //         sLargestNumb = arr[i] ;
    //     }
    // }
    // return sLargestNumb;


    // METHOD - 2 
    int largest = arr[0];
    int sLargest = -1 ;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > largest)
        {
            sLargest = largest ;
            largest = arr[i] ;
        }
        else if(arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i] ;
        }
    }
    return sLargest;
}

//  Check if Array is Sorted or not.
bool sortedArray(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] >= arr[i-1]){
        }
        else{
            return false ;
        }
    }
    return true;
}

// remove duplicates in-place from sorted array 
int removeDuplicates(int arr[], int n)
{
    // Method 1 : use Set- bcz it always have unique elements 

    // Method : 2 
    int i=0 ;
    for(int j=1 ; j<n ; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++ ;
        }
    }
    return i+1 ;
}

// Left rotate the array by one place 
void leftRotateArr(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1 ; i<n ; i++)
    {
        arr[i-1] = arr[i] ;
    }
    arr[n-1] = temp;
}

// Left rotate the array by K-place 
// k = num % k  [ if num=15 & k=7 then k = 15%7 = 1 ]
// method - 1st 
void leftRotateByD(int arr[], int n , int d)
{
    d = d%n ;
    int temp[d] ;
    for(int i=0 ; i<d ; i++)
    {
        temp[i] = arr[i] ;
    }

    for(int i=d ; i<n ; i++)
    {
        arr[i-d] = arr[i] ;
    }

    for(int i=n-d ; i<n ; i++)
    {
        arr[i] = temp[i-(n-d)] ;
    }
}
// method 2nd => tc = O(2n) & sc=O(1)
void rotateElemByK(int arr[], int n , int k)
{
    // this is for left rorate array by K 
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}

// {1,2,3 ,4 ,5} = 5 4 3 2 1 =  3 4 5 2 1
// d = 3                        
// {3,  4, 5, 1, 2 }     
void rightRorateArrbyK(int arr[] , int n , int k)
{
    reverse(arr, arr+n);      // 5 4 3 2 1
    reverse(arr, arr+k);     //  3 4 5 2 1
    reverse(arr+k, arr+n) ; //   3 4 5 1 2 
}

// move zero's to end 
void moveZeros(int arr[], int n)
{
    int j=-1 ;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
        {
            j = i ;
            break ;
        }
    }

    if(j == -1) return ;

    for(int i=j+1 ; i<n ; i++)
    {
        if(arr[i] != 0 )
        {
            swap(arr[i], arr[j]) ;
            j++ ;
        }
    }
}

// linear search of element in array - simple 

// Finde the Union of two sorted arrays 
// Note : No repetation odf element is allowed in Union [ should be unique ]
vector <int> FindUnion(int arr1[], int arr2[], int n, int m)
{
     int i = 0, j = 0;  
  vector < int > Union; 
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;

}


// Find Intersection of 2 array - repeat element is allowed here 
vector <int> findIntersection(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans ;
    int i=0, j=0 ; 
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j]){
            i++ ;
        }
        else if(arr1[i] > arr2[j]){
            j++ ;
        }
        else{
            ans.push_back(arr1[i]);
            i++, j++ ;
        }
    }
    return ans ;
}





void printArray(int arr[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
}


int main()
{
    int arr[] = {0, 2, 9, 10, 75, 11};
    int n = sizeof(arr)/sizeof(int);
    // cout<<"Largest number is : "<<largestElem(arr, n);
    // cout<<"Second Largest number is : "<<secondLargestElem(arr, n);

    int arr2[] = {1, 2, 2, 31, 4};
    int size = 5 ;
    // bool result = sortedArray(arr2, size);
    // if(result){
    //     cout<<"Array is sorted"<<endl;
    // }else{
    //     cout<<"Array is not sorted"<<endl;
    // }
    
    int arr3[] = {1, 1, 3, 4, 4, 8, 9, 10, 10};
    int size3 = 9 ;
    // cout<<removeDuplicates(arr3, size3);

    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size4 = 8 ;
    // leftRotateArr(arr4, size4);
    // printArray(arr4, size4);

    int d = 5 ;
    // leftRotateByD(arr4, size4, d);
    // rotateElemByK(arr4, size4, d);
    // rightRorateArrbyK(arr4, size4, d);
    // printArray(arr4, size4);

    int arr5[] = {1, 2, 3, 5, 6, 6, 7};
    int size5 = 7 ;
    // moveZeros(arr5, size5);
    // printArray(arr5, size5);

    int arr6[] = {1,3,6, 6 ,9};
    int size6 = 5 ;
    // vector <int> Union = FindUnion(arr5, arr6, size5, size6) ;
    vector<int> intersection = findIntersection(arr5, arr6, size5, size6) ;
    for (auto & val: intersection)
       cout << val << " ";


    return 0 ;
}


