#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

while(t--){
 cin>>n>>k;
 vector<int>vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}
 if(find(vec.begin(),vec.end(),k)!=vec.end()){
   cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
}
    return 0;
}