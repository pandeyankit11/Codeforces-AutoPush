#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,k,c;
    cin>>t;

while(t--){
 cin>>n>>k;
 long long c=n/k;
 bool b{0};
 if(n%2==0){
    cout<<"YES"<<endl;
    continue;
 }
 else{
     while(c>=1 && k%2!=0){
        if(c%2==0){
            c--;
            continue;
        }
       long long a=n-(k*c);
    if(a%2==0){
    b=1;
    break;
    }
    c--;
   }
   if(b==1)
   cout<<"YES"<<endl;
   else{
    cout<<"NO"<<endl;
   }
 }
}
    return 0;
}