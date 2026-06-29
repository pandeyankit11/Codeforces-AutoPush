#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>a(n);
 if(n%2==0){
    for(int i=0,j=1;i<n/2,j<n;i++,j+=2){
        a[i]=j;
    }
    for(int i=n-1,j=2;i>=n/2,j<=n;i--,j+=2){
        a[i]=j;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    continue;
 }
 else{
    for(int i=0,j=1;i<=n/2,j<=n;i++,j+=2){
        a[i]=j;
    }
    for(int i=n-1,j=2;i>n/2,j<n;i--,j+=2){
        a[i]=j;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    continue;
 }
}
    return 0;
}