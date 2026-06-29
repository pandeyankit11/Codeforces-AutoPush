#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

while(t--){
    cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 bool check{0};
 int x;
 for(x=0;x<256;x++){
 vector<int>b(n);
 for(int i=0;i<n;i++){
    b[i]=a[i]^x;
  }
  int xor_res{0};
  for(auto num: b){
    xor_res^=num;
  }
  if(xor_res==0){
    cout<<x<<endl;
    check=1;
    break;
  }
 }
 if(check==0)
 cout<<-1<<endl;
}
    return 0;
}