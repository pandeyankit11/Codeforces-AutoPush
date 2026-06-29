#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 if(n/10==0)
 cout<<n<<endl;
 else if(n/100==0)
 cout<<9+n/10<<endl;
 else if(n/1000==0)
 cout<<18+n/100<<endl;
 else if(n/10000==0)
 cout<<27+n/1000<<endl;
 else if(n/100000==0)
 cout<<36+n/10000<<endl;
 else if(n/1000000==0)
 cout<<45+n/100000<<endl;
}
    return 0;
}