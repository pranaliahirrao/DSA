#include<iostream>
using namespace  std ;

int fun2(int a)
{
    cout<<a<<endl ;
    cout<<"Its function 2"<<endl;
    return a;
}

int fun1(int a)
{
    int  c= fun2(a);
    cout<<"Its function 1"<<endl;
    return c ;
}

int main()
{
    // cout<<"hello"<<endl;
    // int a = fun1(5);
    // cout<<a<<endl;

    



    return 0 ;
}
