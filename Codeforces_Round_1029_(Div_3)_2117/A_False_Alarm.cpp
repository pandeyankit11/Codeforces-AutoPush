#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x;
    cin>>t;

while(t--){
 cin>>n>>x;
 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
int l,r;
for(int i=0;i<n;i++){
    if(a[i]==1){
        l=i;
      break;
    }
}
for(int j=n-1;j>=0;j--){
    if(a[j]==1){
        r=j;
        break;
    }
}

if(r-l+1<=x)
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
 
}
    return 0;
}