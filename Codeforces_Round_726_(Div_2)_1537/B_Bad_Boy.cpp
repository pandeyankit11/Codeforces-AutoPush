#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n,m,i,j;
 cin>>n>>m>>i>>j;

 if(i==1 && j==1){
    cout<<n<<" "<<m<<" "<<n<<" "<<m<<endl;
    continue;
 }
 if(i==1 && j==m){
    cout<<n<<" "<<1<<" "<<n<<" "<<1<<endl;
    continue;
 }
 if(i==n && j==1){
    cout<<1<<" "<<m<<" "<<1<<" "<<m<<endl;
    continue;
 }
 if(i==n && j==m){
    cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
    continue;
 }
 cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
}
    return 0;
}