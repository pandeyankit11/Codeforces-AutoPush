#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
    int a,b,c,d;
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
    cin>>vec[i];
 }

 set<int>s{};
 for(int i=0;i<n;i++){
    s.insert(vec[i]);
 }

 if(s.size()==1)
 cout<<"YES"<<endl;
 else if(s.size()==2){
 if(n==2){
    cout<<"YES"<<endl;
    continue;
 }
  a=vec[0];
  for(int i=0;i<n;i++){
    if(vec[i]!=a){
        b=vec[i];
        break;
    }
  }
 c=count(vec.begin(),vec.end(),a);
 d=count(vec.begin(),vec.end(),b);
  if(n%2==0 && c==n/2 && d==n/2)
  cout<<"YES"<<endl;
  else if((c==(n+1)/2 && d==(n-1)/2) || (d==(n+1)/2 && c==(n-1)/2) ){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
 }
 else{
    cout<<"NO"<<endl;
 } 
}
    return 0;
}