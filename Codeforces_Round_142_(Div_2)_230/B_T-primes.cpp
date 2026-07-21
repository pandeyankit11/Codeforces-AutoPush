#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int cnt = 0;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
                cnt++;
        }
    }
    
    if (cnt > 2)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long root = sqrt(arr[i]);

        if (root * root == arr[i])
        {
            if (isPrime(root) && arr[i]!=1)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}