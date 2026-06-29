#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
 long long n,k,x,fsum{0},bsum{0};
 cin>>n>>k>>x;
bool check1{0};
bool check2{0};
bsum=(k*(2*n-k+1))/2;
if(bsum<x)
check1=1;
fsum=(k*(k+1))/2;


if(fsum>x)
check2=1;

if(check1==1 || check2==1)
cout<<"NO"<<endl;
else{
    cout<<"YES"<<endl;
}

}
    return 0;
}