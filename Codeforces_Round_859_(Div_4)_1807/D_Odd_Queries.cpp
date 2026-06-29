#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        // Build prefix sum
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        long long total = prefix[n];

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long segment_sum = prefix[r] - prefix[l - 1];
            long long new_sum = total - segment_sum + k * (r - l + 1);

            if (new_sum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
