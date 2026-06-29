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
 vector<int>b(n);
 for(int i=0;i<n;i++){
    int d=n-a[i];
    b[i]=d+1;
 }
for(auto ch:b)
cout<<ch<<" ";
cout<<endl;
 

}
    return 0;
}