#include<iostream>
using namespace std;


class abc
{
    int x ;
    int *y ;

    public:
    abc()
    {
        x = 0 ;
        y = new int(0);
    }

    int getX()
    {
        return x ;
    }

    void setX(int _value)
    {
        x = _value;
    }

      int getY()
    {
        return *y ;
    }

    void setY(int _value)
    {
        *y = _value;
    }
};



int main()
{
    abc a ;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;

    return 0 ;
}





int main2()
{
    // 1. with const Initialization can be done but cant Re-assign the value 
    // const int num = 10 ;
    // int *p = &num ;          // possible in Old compiler but not in NEW Compilers
    // *p = 20 ;
    // cout<<num;

    // 2. Const with Pointers
    // int *a = new int ;       
    // *a = 20 ;
    // cout<<*a <<endl;
    // delete a ;       // no memory leak 
    // int b = 5 ;
    // a = &b ;
    // cout<<*a <<endl;

    // another example 
    // int const *x = new int(123);          // line 23 and 24 are same 
    // // const int *x = new int(100);       // const data, Non-const pointer 
    // // *x = 25 ;               // not possible bcz -> const data 
    // cout<<*x <<endl;

    // int b = 12 ;
    // x = &b ;                    // non-const pointer , so x can be re-assigned
    // cout<<*x <<endl;

    // 3. Const Pointer, but Non-Const Data 
    // int *const a = new int(111) ;
    // cout<<*a<<endl;
    // *a = 120 ;
    // cout<<*a;
    // int b = 50 ;
    // // a = &b ;           // not possible bcz pointer is ReadOnly or CONST 
    // cout<<*a <<endl;

    return 0 ;
}

