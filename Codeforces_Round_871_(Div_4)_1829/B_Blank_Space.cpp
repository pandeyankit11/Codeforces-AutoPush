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

 int count{0};
 int max_len{0};
 for(int i=0;i<n;i++){
    if(a[i]==0)
    count++;
    else{
        count=0;
    }
    max_len=max(max_len,count);
 }
 cout<<max_len<<endl;
}
    return 0;
}