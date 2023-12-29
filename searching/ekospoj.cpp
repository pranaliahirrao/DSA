#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int isPossibleSolution(vector<long long int> trees, long long int m, long long int mid)
{
    long long int woodCollected = 0;
    for (long long int i = 0; i < trees.size(); i++)
    {
        if (trees[i] >= mid)
        {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m)
{
    long long int start = 0, end, mid, ans = -1;
    end = *max_element(trees.begin(), trees.end());

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (isPossibleSolution(trees, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long long int n = 4, m = 7;
    cin >> n >> m;
    vector<long long int> trees;
    trees.push_back(20);
    trees.push_back(15);
    trees.push_back(10);
    trees.push_back(17);
    // cout << "hello" << endl;
    cout << maxSawBladeHeight(trees, m);

    return 0;
}
