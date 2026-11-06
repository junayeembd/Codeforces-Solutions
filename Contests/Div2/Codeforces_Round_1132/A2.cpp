// Unsubmitted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            a[i] = 1;

            for (int j = 0; j < x; j++)
            {
                a[i] = a[i] * 2;
            }
        }

        sort(a.rbegin(), a.rend());

        long long s1 = 0, s2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s1 <= s2)
            {
                s1 += a[i];
            }
            else
            {
                s2 += a[i];
            }
        }

        cout << s1 * s2 << endl;
    }

    return 0;
}