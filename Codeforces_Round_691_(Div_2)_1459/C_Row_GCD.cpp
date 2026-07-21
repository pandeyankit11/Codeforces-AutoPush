#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long diff_gcd=0;
    for(int i=1;i<n;i++){
        diff_gcd=__gcd(diff_gcd,abs(a[i]-a[0]));
    }

    for (int j = 0; j < m; j++)
    {
        long long g=__gcd(a[0]+b[j],diff_gcd);
        cout << g <<" ";
    }
}