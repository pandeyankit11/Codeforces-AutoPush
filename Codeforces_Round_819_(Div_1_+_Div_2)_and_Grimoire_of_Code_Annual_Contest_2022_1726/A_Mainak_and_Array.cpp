#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool check{0};

        auto max_num = max_element(a.begin(), a.end());
        auto min_num = min_element(a.begin(), a.end());

        int index_max = max_num - a.begin();
        int index_min = min_num - a.begin();

        if (index_max == n - 1)
            check = 1;
        if (index_min == 0)
            check = 1;
        if (index_max+1<n && a[index_max+1] == *min_num)
            check = 1;

        if (check == 1)
            cout << *max_num - *min_num << endl;

        else
        {
            int int1 = *max_num - a[0];
            int int2=*max_num - a[index_max+1];
            int int3= a[n-1]-*min_num;
            int int4=a[n-1]-a[0];
            for(int i=0;i<n-1;i++){
                if(a[i]-a[i+1]>int4)
                int4=a[i]-a[i+1];
            }
            cout << max({int1,int2,int3,int4}) << endl;
        }
    }
    return 0;
}