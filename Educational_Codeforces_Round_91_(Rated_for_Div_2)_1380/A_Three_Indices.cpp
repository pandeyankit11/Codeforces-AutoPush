#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 bool check{0};
for(int i=1;i<n-1;i++){
if(a[i-1]<a[i] && a[i]>a[i+1]){
    check=1;
    cout<<"YES"<<endl;
    cout<<i<<" "<<i+1<<" "<<i+2<<endl;
    break;
}
}
if(check)continue;
else{
    cout<<"NO"<<endl;
}
 
}
    return 0;
}