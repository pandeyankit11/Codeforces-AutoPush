#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
 cin>>n;
 vector<long long>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }

 map<long long ,long long>m;
 for(int i=0;i<n;i++){
    m[a[i]]++;
 }
 long long fmax{0};
 map<long long,long long>:: iterator it;
 for(it=m.begin();it!=m.end();it++){
    fmax=max(it->second,fmax);
 }
 
 int op{0};
 while(fmax<n){
    op++;
    if(fmax*2<=n){
        op+=fmax;
        fmax*=2;
    }
    else{
        op+=n-fmax;
        fmax=n;
    }
 }
 cout<<op<<endl;


}
    return 0;
}