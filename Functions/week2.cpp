#include<iostream>
using namespace std;


void checkEvenOdd(int num)
{
    if(num & 1){
        cout<<"Odd"<<endl; // LSB is 1 then - odd
    }
    else{
        cout<<"Even"<<endl; // LSB is 0 then - even
    }
}

void factorial(long long int num)
{
    long long int ans = 1 ;
    for(long long int i=1 ; i<=num ; i++){
        ans = ans * i ;
    }
    cout<<"Factorial is : "<<ans<<endl;
}

// print all Prime for 1 to N 
bool checkPrimeNumber(int number)
{
    if(number <= 1)
      return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
void printPrimeTillN(int number)
{
     for (int i = 2; i <= number; i++) {
        if (checkPrimeNumber(i)) {
            cout << i << endl;
        }
    }
}

// Reverse the integer 
void reverseDIgit(int num)
{
    int digit ;
    while(num)
    {
        digit = num%10;
        cout<<digit;
        num = num/10 ;
    }
}

// set k-th bit -> left shift + OR :  (1 << k) | (num )
void setBit(int num, int k)
{
    int mask = (1 << k);
    int setBitAns = mask | num;

    // cout<< num | (1 << k);     // in 1 line only  
    cout<<setBitAns<<endl;
}

// count all set bits -> count all 1's [in Binary form of that num] -> e.g. 5 = 0101 => 2 set bits 
void countAllSetBits(int num)
{
    // Method : 1 - divide by 2 
    // int count =0 ;
    // int actualNumber = num;
    // while(num){
    //     int bit = num%2;
    //     if(bit == 1){
    //         count++;
    //     }
    //     num =num/2 ;
    // }
    // cout<<actualNumber<<" setbit count is : "<< count<<endl;

    // Method 2 - Bitwise operator -> bitwise AND with any numb will give you LSB 
    // and then to shift for next num perform Right Shift 
    int count = 0;
    while(num){
        int bit = (num & 1);
        if(bit == 1){
            count++;
        }
        num = ( num >>1 ) ;
    }
    cout<<count<<endl ;
}

// create a number using digits 
void createNumberUsingDigits(int numberDigits)
{
    int newNumber = 0 ;
    for(int i=0 ; i<numberDigits ; i++)
    {
        cout<<"Enter the digit: ";
        int digit ;
        cin>>digit;
        newNumber = newNumber * 10 + digit ;
    }
    cout<<"The number made from digits is : "<<newNumber;
}

// print all digits 
void printDigitsOfNumber(int num)
{
    int digit = 0 ;
    while(num)
    {
        digit = num%10;
        cout<<digit<<endl;
        num = num/10 ;
    }
}

int main() {
    // checkEvenOdd(901);
    // factorial(12);
    // printPrimeTillN(50);
    // reverseDIgit(7653);
    // setBit(5, 1);
    // setBit(10, 2);
    // countAllSetBits(1);
    // countAllSetBits(7);
    // createNumberUsingDigits(3);
    printDigitsOfNumber(1254);




	return 0;
}