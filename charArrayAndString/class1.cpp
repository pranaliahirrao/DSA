#include <bits/stdc++.h>
#include<string.h>
using namespace std;



int charLength(char ch[], int size)
{
    int i = 0;
    int count = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    return count;

    // method : 2
    // int length = 0;

    // for(int i=0; i<size; i++) {
    //  if(ch[i] == '\0') {
    //    //ruk jao
    //    break;
    //  }
    //  else {
    //    length++;
    //  }
    // }

    // return length;
}


void reverseString(char ch[] , int size)
{
    int l=0 , r=size-1 ;
    while (l <= r)
    {
        swap(ch[l], ch[r]);
        l++ ; 
        r-- ;
    }
}


void convertToUpperCase(char ch[] , int n)
{
    int index = 0 ;
    while(ch[index] != '\0')
    {
        if(ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A' ;
        }
        index++ ;
    }
}


void replaceCharacter(char ch[] , int n)
{
    int index = 0 ;
    while(ch[index] != '\0')
    {
        if(ch[index] == '@')
        {
            ch[index] = ' ' ;
        }
        index++ ;
    }
}


// check Palindrome [ ex: NOON , RACECAR , NITIN ]
bool checkPalindrome(char ch[] , int n)
{
    int s=0 , e=n-1 ;
    while(s <= e)
    {
        if(ch[s] == ch[e])
        {
            s++ ;
            e-- ;
        }
        else{
            //characters are not matching
            return false ;
        }
    }
    // its palindrome 
    return true ;
}








int main()
{
    // creation of char
    char ch[100];
    // insertion : it dont take space in input [Pranali Ahirrao] => will take 'Pranali' only
    // cin >> ch;

    //  to takei/p with spaces, tabs use: getline
    cin.getline(ch, 100) ;

    // print
    // cout<<"Output : "<<endl;
    // cout<<ch;
    // cout << endl;

    // Access any index val
    // cout<<"Access any index val in char : "<<ch[3]<<endl;

    // for(int i=0 ; i<100 ; i++)
    // {
    //     cout<<"at index "<<i<<" : "<<ch[i]<<endl;
    // }

    // to check Null Char [ \0 ] value is ZERO or Not
    //  print 'Pranali' : so Null char will be at index : 7
    //  char temp = ch[15];
    //  int val = (int)temp ;
    //  cout<<"Val is : "<<val<<endl;

    // char length
    // int len = charLength(ch, 100);
    // cout << "Char length is : " << len << endl;

    int len = charLength(ch, 100);


    // reverseString(ch, len);
    // convertToUpperCase(ch, len);
    // replaceCharacter(ch, len);

    // bool ans = checkPalindrome(ch, len);
    // if(ans)
    // {
    //     cout<<"Yes, its Palindrome";
    // }
    // else{
    //     cout<<"Not a Palindrome";
    // }
    
    
    // cout<<"After replacing the character @ with space : "<<ch <<endl;


    return 0;
}
