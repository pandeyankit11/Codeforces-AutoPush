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

 if(count(a.begin(),a.end(),1)==n){
    cout<<1<<endl;
    continue;
 }
 int count2=count(a.begin(),a.end(),2);
 if(count2%2!=0){
    cout<<-1<<endl;
    continue;
 }
 int flag{0};
 for(int i=0;i<n;i++){
    if(a[i]==2)
    flag++;
    if(flag==count2/2){
        cout<<i+1<<endl;
        break;
    }
 }
}
    return 0;
}