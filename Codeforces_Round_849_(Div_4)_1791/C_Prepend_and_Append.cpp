#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
    cin>>n;
 string s;
 cin>>s;
 bool check{0};
 int length=s.length();
 if(length==1){
    cout<<1<<endl;
    continue;
 }
 if((s.front()=='0' && s.back()=='1') || ((s.front()=='1' && s.back()=='0'))){
check=1;
     while(check==1){
         s.pop_back();
         if(s.empty())
         break;
         s.erase(0,1);
         if(s.empty())
         break;
if((s.front()=='0' && s.back()=='1') || ((s.front()=='1' && s.back()=='0')))
    check=1;
else{
    check=0;
}

     }
}
cout<<s.length()<<endl;
}
    return 0;
}