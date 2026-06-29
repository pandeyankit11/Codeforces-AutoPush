#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 int n,s;
 cin>>n>>s;

 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 int max=a[n-1];
 int min=a[0];

 if(max-s>=0 && s-min>=0){
    if(max-s>=s-min){
        cout<<2*(s-min)+(max-s)<<endl;
        continue;
    }
    else{
        cout<<2*(max-s)+(s-min)<<endl;
        continue;
    }
 }
 if(max-s<0){
    cout<<s-min<<endl;
    continue;
 }
 if(s-min<0){
    cout<<max-s<<endl;
    continue;
 }
 
}
    return 0;
}