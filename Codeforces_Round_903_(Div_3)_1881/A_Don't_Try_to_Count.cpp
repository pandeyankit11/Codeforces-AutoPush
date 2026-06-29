#include<bits/stdc++.h>
using namespace std;

string concat(string s){
    string new_str;
    new_str=s+s;
    return new_str;
}
int main(){
    int t,n,m;
    cin>>t;

while(t--){
 cin>>n>>m;
 string x;
 string s;

 cin>>x>>s;

 int j{0};
 while(x.find(s)==string::npos){
    x=concat(x);
    j++;
    if(j==10){
        j=-1;
        break;
    }
 }
 cout<<j<<endl;
}
    return 0;
}