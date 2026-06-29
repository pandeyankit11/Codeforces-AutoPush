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
 if(count(a.begin(),a.end(),0)==n){
    cout<<0<<endl;
    continue;
 }
 int len{0};
 for(int i=0;i<n;i++){
    if(a[i]!=0){
    len++;
    while(a[i]!=0 && i<n)
    i++;
    }
    
 }
 if(len==1){
    cout<<1<<endl;
    continue;
}
else{
    cout<<2<<endl;
}
}
    return 0;
}