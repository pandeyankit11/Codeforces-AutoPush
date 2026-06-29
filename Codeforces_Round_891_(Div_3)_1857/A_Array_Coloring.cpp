#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
    cin>>vec[i];
 }
int count =count_if(vec.begin(),vec.end(),[](int x){return x%2!=0;});
 bool allEven=1;
 for(auto ch: vec){
    if(ch%2!=0){
        allEven=0;
        break;
    }
 }
 if(allEven==1){
    cout<<"YES"<<endl;
    continue;
 }
 bool allOdd=1;
 for(auto ch: vec){
    if(ch%2==0){
        allOdd=0;
        break;
    }
 }
 if(allOdd==1){
    if(count%2==0)
    cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    continue;
 }

 if(n==2){
    cout<<"NO"<<endl;
    continue;
 }

if(count%2==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
 

 }

    return 0;
}