#include<iostream>
using namespace std ;

void printMsg()
{
    cout<<"Inside print message function"<<endl;
}

void printMaxNo(int num1, int num2, int num3)
{
    if(num1 >= num2 && num1 >= num3)
    {
        cout<<"Max no is : "<<num1<<endl;
    }
    else  if(num2 >= num1 && num2 >= num3)
    {
        cout<<"Max no is : "<<num2<<endl;
    }
    else{
        cout<<"Max no is : "<<num3<<endl;
    }
}

int printMaximumNumber(int num1, int num2 , int num3)
{
    int max1 = max(num1 , num2);
    int max2 = max(max1 , num3);
    // cout<<"Max no is : "<<max2<<endl;
    return max2;
}

void checkEvenOdd(int number)
{
    // Method : 1
    // if(number%2 == 0){
    //     cout<<"even "<<endl;
    // }
    // else{
    //     cout<<"odd"<<endl;
    // }

    // Method : 2 : Bitwise oparator [ AND ]
    if(number & 1){
        cout<<"Odd number"<<endl;
    }
    else{
        cout<<"Even number"<<endl;
    }
}

bool checkPrimeNumber(int number)
{
    for(int i=2 ; i<number ; i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;

    // you can change the condition to -> i< sqrt(number)
}




int main()
{
    cout<<"hello"<<endl;

    // printMsg();
    // printMaxNo(47, 47, 9);

    // int ans = printMaximumNumber(30, 3 , 3);
    // cout<<ans<<endl;
    
    // checkEvenOdd(15);

    // bool flag = checkPrimeNumber(30);
    // if(flag){
    //     cout<<"Prime number."<<endl;
    // }else{
    //     cout<<"Not a Prime number"<<endl;
    // }

    if(~0 ==1) 
      cout<<"yes";
    else 
      cout<<"No";


    return 0;
}

