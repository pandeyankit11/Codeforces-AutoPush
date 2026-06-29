#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n,k;
 cin>>n>>k;
 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 int count{0};
 int  max_len{0};
 for(int i=0;i<n-1;i++){
    if((a[i+1]-a[i])<=k)
    count++;
    else{
    count=0;
    }
    max_len=max(max_len,count);
 }

 cout<<n-max_len-1<<endl;
}
    return 0;
}