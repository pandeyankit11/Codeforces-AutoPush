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
 int result=a[0];
 for(int i=0;i<n;i++){
    result&=a[i];
 }
 cout<<result<<endl;
}
    
}