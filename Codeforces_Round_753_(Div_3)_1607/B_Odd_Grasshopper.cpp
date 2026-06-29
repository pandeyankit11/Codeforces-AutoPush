#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long x,n;
 cin>>x>>n;
int rem=n%4;

long long delta{0};
if(rem==1)
delta=-n;
if(rem ==2)
delta=1;
if(rem==3)
delta=n+1;

if(x%2==0)
x+=delta;
else{
    x-=delta;
}


cout<<x<<endl;
}
    return 0;
}