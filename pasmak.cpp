// https://codeforces.com/contest/459/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long minCount = 0;
    long long maxCount = 0;
    long long numPairs = 0;

    if (a[0] == a[n - 1])
    {
        numPairs = n * (n - 1) / 2;
    }

    // Correctly count minimums
    else
    {
        for (long long i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                minCount++;
            }
            else
            {
                break;
            }
        }
        // Correctly count maximums

        for (long long i = n - 1; i >= 0; i--)
        {
            if (a[i] == a[n - 1])
            {
                maxCount++;
            }
            else
            {
                break;
            }
        }
        
        numPairs = maxCount * minCount;
    }

    long long diff = a[n - 1] - a[0];


    cout << diff << " " << numPairs << endl;

    return 0;
}