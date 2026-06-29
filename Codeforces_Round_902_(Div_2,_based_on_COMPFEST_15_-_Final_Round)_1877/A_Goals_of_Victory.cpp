#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 int ans;
 vector<int>vec(n-1);
 for(int i=0;i<n-1;i++){
    cin>>vec[i];
 }
ans=-(accumulate(vec.begin(),vec.end(),0));
cout<<ans<<endl;
}
    return 0;
}