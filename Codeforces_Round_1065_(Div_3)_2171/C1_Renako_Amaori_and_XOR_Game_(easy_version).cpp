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
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count_b = accumulate(b.begin(), b.end(), 0);
        int count_a = accumulate(a.begin(), a.end(), 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            if (i % 2 != 0)
            {
                if (count_b % 2 == 0)
                {
                    count_a += b[i] - a[i];
                    count_b += a[i] - b[i];
                    int temp = a[i];
                    a[i] = b[i];
                    b[i] = temp;
                }
            }
            else
            {
                if (count_a % 2 == 0)
                {
                    count_a += b[i] - a[i];
                    count_b += a[i] - b[i];
                    int temp = a[i];
                    a[i] = b[i];
                    b[i] = temp;
                }
            }
        }

        if ((count_a % 2 != 0 && count_b % 2 != 0) || (count_a % 2 == 0 && count_b % 2 == 0))
        {
            cout << "Tie" << endl;
        }
        else
        {
            if (count_a % 2 != 0)
                cout << "Ajisai" << endl;
            else
                cout << "Mai" << endl;
        }
    }
    return 0;
}