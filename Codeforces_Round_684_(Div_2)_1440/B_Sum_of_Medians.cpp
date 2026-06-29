#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

while(t--){
 cin>>n>>k;
 vector<long long>a(n*k);
 for(int i=0;i<n*k;i++){
    cin>>a[i];
 }


 long long sum{0};
 int i=n*k-1-floor((double)n/2);
 while(k--){
  sum+=a[i];
  i=i-floor((double)n/2)-1;
 }

 cout<<sum<<endl;


}
    return 0;
}