#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    
while(t--){
 cin>>n;
 int ans{0};
 bool a{0};
 vector<char> vec(n);
 
 for(int i=0;i<n;i++){
    cin>>vec[i];
 }

    for(int i=2;i<n;i++){
    if(vec[i-2]=='.' && vec[i-1]=='.' && vec[i]=='.')
    a=1;
    }
    ans= (a==1)? 2 : count(vec.begin(),vec.end(),'.') ;
cout<<ans<<endl;
}
    return 0;
}