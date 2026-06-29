#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b;
    cin>>t;

while(t--){
 cin>>n>>a>>b;
 if(n==a && a==b){
    cout<<"Yes"<<endl;
    continue;
 }
 if(n==2 || n==3){
    cout<<"No"<<endl;
    continue;
 }
 if(a+b<=n-2){
    cout<<"Yes"<<endl;
 }
 else{
     cout<<"No"<<endl;
 }

}
    return 0;
}