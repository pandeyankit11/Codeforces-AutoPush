#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
int main()
{
    int t;
    cin >> t;
    int n, x, dmax, lastd, ans;
    while (t--)
    {
        cin >> n >> x;
        vector<int> vec(n);
        
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        dmax=vec[0];
        lastd = 2 * (x - vec[n-1]);
        if(n>1){
        dmax = vec[1] - vec[0];
   
        for (int i = 1; i <n; i++)
        {
            if (vec[i] - vec[i - 1] > dmax)
                dmax = vec[i] - vec[i - 1];
        }

        if ((vec[0] - 0) > dmax)
            dmax = vec[0] - 0;
        }
        ans = (lastd > dmax) ? lastd : dmax;

        cout << ans << endl;
    }

    return 0;
}