#include <iostream>
using namespace std;

void printPermutation(string & str, int index)
{
    // base case
    if (index >= str.length())
    {
        cout <<"->"<<str<<endl;
        return;
    }

    for(int j=index ; j<str.length() ; j++)
    {
        swap(str[j], str[index]);
        // Recursion
        printPermutation(str, index+1);
        // Backtracking : to nullify swap effect
        swap(str[j], str[index]);
    }
}

int main()
{
    string str = "abc";
    int index = 0;
    printPermutation(str, index);

    return 0;
}
