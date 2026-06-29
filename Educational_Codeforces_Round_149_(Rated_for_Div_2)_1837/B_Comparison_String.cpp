#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int count_less{0};
 int max_less{0};
 for(int i=0;i<n;i++){
    if(s[i]==s[i+1] && s[i]=='<')
    count_less++;
    else{
        count_less=0;
    }
    max_less=max(max_less,count_less);
 }
max_less++;

 int count_grt{0};
 int max_grt{0};
 for(int i=0;i<n;i++){
    if(s[i]==s[i+1] && s[i]=='>')
    count_grt++;
    else{
        count_grt=0;
    }
    max_grt=max(max_grt,count_grt);
 }
 max_grt++;
 
 int ans;
 if(max_less>=max_grt)
 ans=max_less;
 else{
    ans=max_grt;
 }
cout<<ans+1<<endl;
 
 
}
    return 0;
}