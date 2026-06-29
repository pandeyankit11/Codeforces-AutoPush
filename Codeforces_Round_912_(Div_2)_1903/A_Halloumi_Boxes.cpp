#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main(){
    int t;
    long long n,k;
    cin>>t;

while(t--){
 cin>>n>>k;
 vector<int>vec(n);
 for(int i=0;i<n;i++)
 cin>>vec[i];

if(k>=2)
cout<<"YES"<<endl;
else{
    if(is_sorted(vec.begin(),vec.end()))
    cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
}
    return 0;
}