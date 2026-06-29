#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>vec(n);

 for(int i=0;i<n;i++){
    cin>>vec[i];
 }

 for(int i=1;i<n-1;i++){
    if(vec[i+1]<vec[i])
    swap(vec[i+1],vec[i]);
    k=i;
    for(int j=i-1;j>=1;j--){
      if(vec[j]>vec[i]){
         swap(vec[j],vec[i]);
         i--;
      }
    }
    i=k;
 }

 if(is_sorted(vec.begin(),vec.end()))
 cout<<"YES"<<endl;
 else{
    cout<<"NO"<<endl;
 }
}
    return 0;
}