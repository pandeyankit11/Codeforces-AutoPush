#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    bool check{0};
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2)
                check=1;
            }
        }
        if(check==0)
        cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}