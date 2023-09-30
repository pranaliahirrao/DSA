#include <bits/stdc++.h>
using namespace std;

// find square root of No with PRECISION - uber interview Qs
// sqrt(51) = 7.14142

int mySqrt(int n)
{
    // normal sqrt funtion using BS
    int s = 0, e = n - 1;
    int ans = 0;
    while (s <= e)
    {
        // updating mid here ; thats why only once
        int mid = s + (e - s) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n);
    cout << "the value in myPrecisionSqrt is : " << sqrt << endl;
    double step = 0.1;
    int precision = 5;

    for (int i = 0; i < precision; i++)
    {
        double j = sqrt;
        while (j * j <= n)
        {
            sqrt = j;
            j += step;
        }
        step = step / 10;
        cout << "the value in myPrecisionSqrt after " << i << " is: " << sqrt << endl;
    }
    return sqrt;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    double sqrt = myPrecisionSqrt(n);
    cout << "The sqrt of " << n << " with precision is : " << sqrt << endl;

    return 0;
}
