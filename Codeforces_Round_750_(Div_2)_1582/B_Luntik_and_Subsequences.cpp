#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 long long zero_count=count(a.begin(),a.end(),0);
 long long one_count=count(a.begin(),a.end(),1);
 long long ans=pow(2,zero_count);
 cout<<ans*one_count<<endl;

}
    return 0;
}